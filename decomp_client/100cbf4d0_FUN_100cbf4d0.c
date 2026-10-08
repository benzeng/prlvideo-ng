
ulong FUN_100cbf4d0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  int local_30 [2];
  
  uVar4 = 0;
  if (param_3 != (char *)0x0) {
    iVar1 = _strcmp(param_2,"key");
    if (iVar1 == 0) {
      sVar3 = _strlen(param_3);
      uVar4 = 0;
      if (-1 < (int)sVar3) {
        iVar1 = FUN_100cbec50(*(undefined8 *)(param_1 + 0x28),param_3,(long)(int)sVar3,0,0);
        uVar4 = (ulong)(iVar1 != 0);
      }
    }
    else {
      iVar1 = _strcmp(param_2,"cipher");
      if (iVar1 == 0) {
        lVar2 = FUN_100c6bd50(param_3);
        uVar4 = 0;
        if (lVar2 != 0) {
          iVar1 = FUN_100cbec50(*(undefined8 *)(param_1 + 0x28),0,0,lVar2,
                                *(undefined8 *)(param_1 + 8));
          uVar4 = (ulong)(iVar1 != 0);
        }
      }
      else {
        iVar1 = _strcmp(param_2,"hexkey");
        uVar4 = 0xfffffffe;
        if (iVar1 == 0) {
          lVar2 = FUN_100c9fc70(param_3,local_30);
          uVar4 = 0;
          if (lVar2 != 0) {
            uVar4 = 0;
            if (-1 < local_30[0]) {
              iVar1 = FUN_100cbec50(*(undefined8 *)(param_1 + 0x28),lVar2,(long)local_30[0],0,0);
              uVar4 = (ulong)(iVar1 != 0);
            }
            FUN_100bf3910(lVar2);
          }
        }
      }
    }
  }
  return uVar4;
}

