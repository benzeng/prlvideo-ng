
undefined8 FUN_10061b970(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Server instance is null.");
    return 0;
  }
  uVar4 = (param_3 & 1) << 0xe;
  if ((param_3 & 2) == 0) {
    if ((param_3 & 1) == 0) {
      cVar2 = FUN_100d80630(1);
      if (cVar2 == '\0') {
        uVar4 = uVar4 | 0x800000;
      }
    }
  }
  else {
    uVar4 = uVar4 | 0x100000;
  }
  uVar4 = param_3 << 0x16 & 0x1000000 | uVar4;
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    uVar4 = uVar4 | ~(param_3 << 0x16) & 0x2000000;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10015aa20(&local_40,uVar3);
  lVar1 = local_40;
  QString::toUtf8();
  uVar3 = _PrlSrv_UpdateLicenseEx(lVar1,local_48 + *(long *)(local_48 + 0x10),"","",uVar4);
  uVar3 = FUN_10061b530(param_1,uVar3,0x820);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10061bab8;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10061bab8:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

