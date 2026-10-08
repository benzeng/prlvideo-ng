
undefined1 FUN_100ad8a40(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar4 = (long *)FUN_100adb590(param_1 + 0x100);
  lVar1 = *plVar4;
  if (lVar1 == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "Unable to StartDragOperation for 0x%08X. Window doesn\'t exists",param_2);
      return 0;
    }
    return 0;
  }
  QByteArray::QByteArray((QByteArray *)&local_40,0x50,'\0');
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar3 = local_40;
  lVar2 = *(long *)(local_40 + 0x10);
  *(undefined4 *)(local_40 + lVar2 + 8) = 0x50;
  *(undefined4 *)(local_40 + lVar2 + 0x20) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(local_40 + lVar2) = 0x11;
  *(undefined4 *)(local_40 + lVar2 + 0x28) = 0;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar5 = (uint *)*param_3;
  if (1 < *puVar5) {
    FUN_100036c40(param_3,puVar5[1]);
    puVar5 = (uint *)*param_3;
  }
  puVar6 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar5) {
      FUN_100036c40(param_3,puVar5[1]);
      puVar5 = (uint *)*param_3;
    }
    if (puVar6 == puVar5 + (long)(int)puVar5[3] * 2 + 4) break;
    QString::toUtf8();
    QByteArray::append((QByteArray *)&local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ad8b60;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100ad8b60:
    QByteArray::append((char)(QByteArray *)&local_48);
    puVar6 = puVar6 + 2;
    puVar5 = (uint *)*param_3;
  }
  *(int *)(pQVar3 + lVar2 + 8) = *(int *)(local_48 + 4) + 0x50;
  QByteArray::append((QByteArray *)&local_40);
  FUN_100ad3560(param_1,&local_40,*(undefined8 *)(lVar1 + 0x38));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad8c83;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100ad8c83:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return 1;
}

