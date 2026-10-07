
undefined8 FUN_10041d4a0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  QArrayData *pQVar10;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  plVar3 = (long *)FUN_10041d810(param_1,*(undefined4 *)(param_2 + 4));
  uVar6 = 0;
  if (plVar3 == (long *)0x0) goto LAB_10041d6ce;
  lVar1 = *plVar3;
  if ((long)*(int *)(lVar1 + 4) != 0) {
    pcVar7 = (char *)(lVar1 + *(long *)(lVar1 + 0x10));
    pcVar9 = pcVar7 + *(int *)(lVar1 + 4);
    pcVar8 = pcVar7;
    do {
      if (*pcVar7 == '\0') {
        pcVar5 = (char *)0x0;
        if (pcVar8 != (char *)0x0) {
          QByteArray::QByteArray((QByteArray *)&local_48,pcVar8,-1);
          local_50 = (QArrayData *)puVar2;
          (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
                    (*(long **)(param_1 + 0x10),(QByteArray *)&local_48,&local_50);
          QByteArray::append((QByteArray *)&local_40);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10041d592;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_10041d592:
          pcVar5 = (char *)0x0;
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              pcVar5 = (char *)0x0;
              if ((bool)local_31) goto LAB_10041d5d0;
            }
            QArrayData::deallocate(local_48,1,8);
            pcVar5 = (char *)0x0;
          }
        }
      }
      else {
        pcVar5 = pcVar8;
        if (pcVar8 == (char *)0x0) {
          pcVar5 = pcVar7;
        }
      }
LAB_10041d5d0:
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar5;
    } while (pcVar9 != pcVar7);
  }
  pQVar10 = (QArrayData *)*plVar3;
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041d611;
      pQVar10 = (QArrayData *)*plVar3;
    }
    QArrayData::deallocate(pQVar10,1,8);
  }
LAB_10041d611:
  operator_delete(plVar3);
  local_58 = (QArrayData *)puVar2;
  sVar4 = _strlen((char *)(local_40 + *(long *)(local_40 + 0x10)));
  QByteArray::resize((int)&local_58);
  pQVar10 = local_40 + *(long *)(local_40 + 0x10);
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  FUN_10041fb90(pQVar10,local_58 + *(long *)(local_58 + 0x10),(int)sVar4 + 1);
  QByteArray::prepend((char *)&local_58);
  FUN_100419170(param_1,&local_58);
  uVar6 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041d6ce;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10041d6ce:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar6;
}

