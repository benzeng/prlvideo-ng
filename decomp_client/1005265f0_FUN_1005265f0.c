
void FUN_1005265f0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  _func_void_Node_ptr *local_30;
  undefined1 local_22;
  
  cVar3 = FUN_100525ab0();
  if (cVar3 != '\0') {
    lVar2 = param_1[6];
    (**(code **)(*param_1 + 0x1b8))(&local_30,param_1);
    FUN_10059ed30(lVar2,&local_30);
    if (*(int *)(local_30 + 0x10) != -1) {
      if (*(int *)(local_30 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_30 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return;
        }
        local_22 = 0;
      }
      QHashData::free_helper(local_30);
    }
  }
  return;
}

