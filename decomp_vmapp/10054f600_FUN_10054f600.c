
void FUN_10054f600(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_10111da98;
  if (*(int *)(param_1 + 10) != 0) {
    iVar2 = FUN_100761880(param_1[6],FUN_100761810,0,param_1[9]);
    if (iVar2 == *(int *)(param_1 + 10)) {
      *(undefined4 *)(param_1 + 10) = 0;
    }
    else {
      FUN_1008e3970("","TransMem",0,"CCompressedFile::put_data() buffered write failed");
    }
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    param_1[9] = 0;
  }
  return;
}

