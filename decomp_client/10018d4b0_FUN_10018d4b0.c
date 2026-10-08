
undefined8 * FUN_10018d4b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  local_20 = 0x400;
  QByteArray::QByteArray((QByteArray *)&local_28,0x400,'?');
  uVar1 = *param_2;
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar2 = _PrlVmCfg_GetUuid(uVar1,local_28 + *(long *)(local_28 + 0x10),&local_20);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVmCfg_GetUuid failed.");
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    pQVar4 = local_28 + *(long *)(local_28 + 0x10);
    if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_28 + 4) != 0)) {
      lVar3 = 0;
      do {
        if (pQVar4[lVar3] == (QArrayData)0x0) break;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(local_28 + 4));
      if ((int)lVar3 == -1) {
        _strlen((char *)pQVar4);
      }
    }
    QString::fromUtf8_helper((char *)&local_30,(int)pQVar4);
    QString::normalized(param_1,&local_30,1,0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10018d5d6;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_10018d5d6:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return param_1;
}

