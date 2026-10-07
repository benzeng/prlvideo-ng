
void FUN_1007cec20(char *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined *local_58;
  undefined *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar3 = QByteArray::indexOf(param_1,0xaf7639);
  puVar2 = PTR_shared_null_100ba20d0;
  if (iVar3 != -1) {
    puVar1 = (undefined8 *)(param_2 + 0x18);
    bVar6 = false;
    do {
      iVar4 = iVar3;
      if (bVar6) {
        QByteArray::mid((int)&local_48,(int)param_1);
        local_58 = puVar2;
        local_50 = puVar2;
        FUN_1007cf560(puVar1,&local_58);
        if (*(int *)puVar2 != -1) {
          if (*(int *)puVar2 == 0) {
LAB_1007cecbf:
            QArrayData::deallocate((QArrayData *)puVar2,1,8);
          }
          else {
            LOCK();
            *(int *)puVar2 = *(int *)puVar2 + -1;
            local_31 = *(int *)puVar2 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1007cecbf;
          }
          if (*(int *)puVar2 != -1) {
            if (*(int *)puVar2 != 0) {
              LOCK();
              *(int *)puVar2 = *(int *)puVar2 + -1;
              local_31 = *(int *)puVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007ced00;
            }
            QArrayData::deallocate((QArrayData *)puVar2,2,8);
          }
        }
LAB_1007ced00:
        puVar5 = (uint *)*puVar1;
        if (1 < *puVar5) {
          FUN_1007cf9b0(puVar1,puVar5[1]);
          puVar5 = (uint *)*puVar1;
        }
        QByteArray::operator=
                  ((QByteArray *)(*(long *)(puVar5 + (long)(int)puVar5[3] * 2 + 2) + 8),
                   (QByteArray *)&local_48);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ced60;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_1007ced60:
      iVar3 = QByteArray::indexOf(param_1,0xaf7639);
      bVar6 = iVar4 != -1;
    } while (iVar3 != -1);
    if (iVar4 != -1) {
      QByteArray::right((int)(QByteArray *)&local_40);
      QByteArray::operator=((QByteArray *)(param_2 + 8),(QByteArray *)&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007cedde;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
LAB_1007cedde:
  FUN_10079a630(param_2);
  return;
}

