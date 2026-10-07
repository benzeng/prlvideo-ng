
bool FUN_100572ff0(long *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  sVar1 = param_1[0x22c];
  pcVar3 = _malloc(sVar1);
  if (pcVar3 == (char *)0x0) {
    bVar4 = false;
    FUN_1008e3970("","vdisk",0,"No memory for MBR buffer");
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,pcVar3,sVar1 & 0xffffffff,0);
    if (iVar2 < 0) {
      bVar4 = false;
      FUN_1008e3970("","vdisk",0,"MBR reading failed");
    }
    else {
      bVar4 = true;
      if (*pcVar3 == '\0') {
        iVar2 = _memcmp(pcVar3,pcVar3 + 1,0x1ff);
        bVar4 = iVar2 != 0;
      }
    }
    _free(pcVar3);
  }
  return bVar4;
}

