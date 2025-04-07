"""
Integration
"""

import compiler
import rba
import decompiler

if __name__ == "__main__":
    # compile file
    comp = compiler.Compiler()
    comp.parse_cli_args()
    result = comp.compile_all()

    if len(result) > 0:
        input_toks = result[0]
    else:
        print("No input tokens found.")
        exit(1)
    
    # run rba

    # run decompiler
    """
    decomp = decompiler.IRToCDecompiler()
    decomp.generate_c_code()
    """

    pass
