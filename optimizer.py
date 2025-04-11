"""
Integration
"""

import preprocessor
import compiler
import rba_v2 as rba
import decompiler

if __name__ == "__main__":
    # compile file
    comp = compiler.Compiler()
    comp.parse_cli_args()

    if len(comp.input_files) > 0:
        input_file = comp.input_files[0]
    else:
        print("No input files found.")
        exit(1)

    result = comp.compile(input_file)
    
    # run rba
    print(preprocessor.LIBRARY_LIBS)
    print(preprocessor.USER_LIBS)
    parser = rba.Parser(["database.rbe"], -1, 0)
    
    for tok in result:
        if tok == "#FUNC":
            tok.value = parser.graph.execute(tok.value)

    # run decompiler
    """
    decomp = decompiler.IRToCDecompiler()
    decomp.generate_c_code()
    """

    pass
