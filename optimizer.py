"""
Integration
"""

import preprocessor
import compiler
import rba
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

    # run decompiler
    """
    decomp = decompiler.IRToCDecompiler()
    decomp.generate_c_code()
    """

    pass
