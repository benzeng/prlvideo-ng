
void FUN_10070d620(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_100bce120;
  FUN_1008e3970("","AbstractFile",0,
                "ERROR: AIO WORKER POSIX is not supported for now, see PDFM-37354");
                    /* WARNING: Subroutine does not return */
  _abort();
}

