
void FUN_100733730(QDeclarativeImageProvider *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  QArrayData *local_98;
  QArrayData *local_90;
  long local_88;
  QArrayData *local_80;
  undefined1 local_78 [12];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  QDeclarativeImageProvider::QDeclarativeImageProvider(param_1,1);
  *(undefined ***)param_1 = &PTR_FUN_1021f5e30;
  if (*(int *)(DAT_1023123d0 + 0x14) == 0) {
    local_40 = *(undefined8 *)(PTR_staticMetaObject_1021e1498 + 0x28);
    local_48 = *(undefined8 *)(PTR_staticMetaObject_1021e1498 + 0x20);
    local_50 = *(undefined8 *)(PTR_staticMetaObject_1021e1498 + 0x18);
    local_58 = *(undefined8 *)(PTR_staticMetaObject_1021e1498 + 0x10);
    local_68 = *(undefined8 *)PTR_staticMetaObject_1021e1498;
    local_60 = *(undefined8 *)(PTR_staticMetaObject_1021e1498 + 8);
    iVar1 = QMetaObject::indexOfEnumerator((char *)&local_68);
    if (-1 < iVar1) {
      FUN_100734520(&DAT_1023123d0);
      local_78 = QMetaObject::enumerator((int)&local_68);
      iVar1 = QMetaEnum::keyCount();
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          pcVar5 = (char *)QMetaEnum::key((int)local_78);
          QByteArray::QByteArray((QByteArray *)&local_80,pcVar5,-1);
          QByteArray::replace((char *)&local_80,0x1e140c8,(char *)0x5,0x1e41978);
          QByteArray::split((char)&local_88);
          if (*(int *)(local_88 + 8) < *(int *)(local_88 + 0xc)) {
            local_90 = *(QArrayData **)(local_88 + 0x10 + (long)*(int *)(local_88 + 8) * 8);
            if (1 < *(int *)local_90 + 1U) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + 1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
            }
          }
          else {
            local_90 = (QArrayData *)PTR_shared_null_1021e1288;
          }
          uVar2 = QByteArray::toInt((bool *)&local_90,0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007338da;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_1007338da:
          if (*(int *)(local_88 + 0xc) - *(int *)(local_88 + 8) < 2) {
            local_98 = (QArrayData *)PTR_shared_null_1021e1288;
          }
          else {
            local_98 = *(QArrayData **)(local_88 + 0x18 + (long)*(int *)(local_88 + 8) * 8);
            if (1 < *(int *)local_98 + 1U) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + 1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
            }
          }
          uVar3 = QByteArray::toInt((bool *)&local_98,0);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10073396a;
            }
            QArrayData::deallocate(local_98,1,8);
          }
LAB_10073396a:
          local_a0 = uVar2;
          local_9c = uVar3;
          local_a4 = QMetaEnum::value((int)local_78);
          FUN_1007345c0(&DAT_1023123d0,&local_a0,&local_a4);
          FUN_1000ee530(&local_88);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007339dc;
            }
            QArrayData::deallocate(local_80,1,8);
          }
LAB_1007339dc:
          iVar4 = QMetaEnum::keyCount();
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar4);
      }
    }
  }
  return;
}

