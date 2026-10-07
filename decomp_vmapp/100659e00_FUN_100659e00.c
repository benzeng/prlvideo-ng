
undefined8 * FUN_100659e00(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_38;
  ulong local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QByteArray::QByteArray((QByteArray *)&local_28,0x20,'\0');
  local_30 = (ulong)(int)*(uint *)(local_28 + 4);
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar1 = _sysctlbyname("hw.model",local_28 + *(long *)(local_28 + 0x10),&local_30,(void *)0x0,0);
  if (iVar1 < 0) {
    piVar2 = ___error();
    if ((*piVar2 == 0xc) && ((ulong)(long)(int)*(uint *)(local_28 + 4) < local_30)) {
      QByteArray::resize((int)&local_28);
      if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
      }
      iVar1 = _sysctlbyname("hw.model",local_28 + *(long *)(local_28 + 0x10),&local_30,(void *)0x0,0
                           );
      if (-1 < iVar1) goto LAB_100659ee1;
    }
    piVar2 = ___error();
    FUN_1008e3970("","pvsHostInfo",0,"Failed to get hw model: %d",*piVar2);
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
LAB_100659ee1:
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
    QString::fromUtf8_helper((char *)&local_38,(int)pQVar4);
    QString::normalized(param_1,&local_38,1,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100659f9e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100659f9e:
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

