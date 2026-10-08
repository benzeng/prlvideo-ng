
undefined4 FUN_100b91370(char *param_1,undefined8 *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined1 local_b8 [96];
  undefined4 local_58;
  undefined4 uStack_54;
  
  iVar2 = _open(param_1,0);
  iVar3 = _fstat_INODE64(iVar2,local_b8);
  uVar6 = 0xfffffffc;
  if (iVar3 != -1) {
    sVar1 = CONCAT44(uStack_54,local_58);
    if ((long)sVar1 < 0x2aaab) {
      pvVar4 = _malloc(sVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _close(iVar2);
        uVar6 = 0xfffffffe;
      }
      else {
        sVar5 = _read(iVar2,pvVar4,sVar1);
        _close(iVar2);
        if (sVar1 == sVar5) {
          uVar6 = local_58;
        }
      }
    }
    else {
      _close(iVar2);
    }
  }
  return uVar6;
}

