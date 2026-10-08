
undefined8 FUN_10015c320(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100794960();
  lVar5 = FUN_100795470(uVar4,param_1,param_2);
  if ((lVar5 == 0) || (lVar2 = *(long *)(lVar5 + 0x158), lVar2 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to start appliance installation");
    return 0;
  }
  _PrlHandle_AddRef(lVar2);
  _PrlHandle_Free(lVar2);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    FUN_100d6e4c0(6,&local_40,0);
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  lVar5 = *(long *)(lVar5 + 0x158);
  if (lVar5 != 0) {
    _PrlHandle_AddRef(lVar5);
  }
  iVar1 = *(int *)(local_40 + 4);
  pQVar6 = (QArrayData *)0x0;
  if (iVar1 != 0) {
    QString::toUtf8();
    pQVar6 = local_48 + *(long *)(local_48 + 0x10);
  }
  uVar4 = _PrlSrv_InstallAppliance(lVar2,lVar5,pQVar6,0x1000);
  uVar4 = FUN_10015c580(param_1,uVar4,0x857,param_2);
  if ((iVar1 != 0) && (*(int *)local_48 != -1)) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015c451;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10015c451:
  if (lVar5 != 0) {
    _PrlHandle_Free(lVar5);
  }
  if (lVar2 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar4;
}

