
undefined8 FUN_100b47bd0(uint param_1,byte param_2)

{
  char cVar1;
  undefined8 ****ppppuVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  QArrayData *local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_30 = 0;
  local_40 = &local_40;
  local_38 = &local_40;
  cVar1 = FUN_100b46a70(&local_40,0,0);
  if (cVar1 == '\0') {
    piVar3 = ___error();
    DAT_10231428c = *piVar3;
    uVar4 = 0x80004000;
    FUN_100df99c0("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %d");
    goto LAB_100b47d31;
  }
  ppppuVar5 = &local_40;
  if ((undefined8 ****)local_38 != &local_40) {
    ppppuVar2 = (undefined8 ****)local_38;
    do {
      ppppuVar5 = ppppuVar2;
      if (*(uint *)(ppppuVar2 + 5) == (param_1 | 0x10000000)) break;
      ppppuVar2 = (undefined8 ****)ppppuVar2[1];
      ppppuVar5 = &local_40;
    } while (ppppuVar2 != &local_40);
  }
  if (ppppuVar5 == &local_40) {
    uVar4 = 0x80004004;
    FUN_100df99c0("","prl_net",0,"[PrlNet] Error enabling adapter: Adapter %d is not installed",
                  param_1 & 0xfffffff);
    goto LAB_100b47d31;
  }
  QString::toLatin1();
  cVar1 = FUN_100b47ae0(local_48 + *(long *)(local_48 + 0x10),param_2,param_2 ^ 1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b47cc9;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100b47cc9:
  uVar4 = 0;
  if (cVar1 == '\0') {
    piVar3 = ___error();
    DAT_10231428c = *piVar3;
    uVar4 = 0x80004001;
    FUN_100df99c0("","prl_net",0,"[PrlNet] Error enabling adapter: setIfFlags(): %d");
  }
LAB_100b47d31:
  FUN_100b3d5f0(&local_40);
  return uVar4;
}

