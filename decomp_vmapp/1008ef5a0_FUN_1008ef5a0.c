
void FUN_1008ef5a0(void)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_1011b6178);
  if (iVar1 == 0) {
    return;
  }
  FUN_1008e3970("","MacResFile",0,"Failed to unlock access to Resource Manager, err %i");
                    /* WARNING: Subroutine does not return */
  __exit(0xffffffff);
}

