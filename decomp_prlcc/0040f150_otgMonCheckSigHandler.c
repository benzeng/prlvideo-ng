
void otgMonCheckSigHandler(int param_1)

{
  if (param_1 == 0) {
    param_1 = -1;
  }
                    /* WARNING: Subroutine does not return */
  siglongjmp((__jmp_buf_tag *)&DAT_0061da60,param_1);
}

