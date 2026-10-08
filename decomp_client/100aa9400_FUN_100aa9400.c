
void FUN_100aa9400(char *param_1,long param_2)

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
  
  iVar3 = QByteArray::indexOf(param_1,0x1e4137b);
  puVar2 = PTR_shared_null_1021e1288;
  if (iVar3 != -1) {
    puVar1 = (undefined8 *)(param_2 + 0x18);
    bVar6 = false;
    do {
      iVar4 = iVar3;
      if (bVar6) {
        QByteArray::mid((int)&local_48,(int)param_1);
        local_58 = puVar2;
        local_50 = puVar2;
        FUN_100aa9d40(puVar1,&local_58);
        if (*(int *)puVar2 != -1) {
          if (*(int *)puVar2 == 0) {
LAB_100aa949f:
            QArrayData::deallocate((QArrayData *)puVar2,1,8);
          }
          else {
            LOCK();
            *(int *)puVar2 = *(int *)puVar2 + -1;
            local_31 = *(int *)puVar2 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_100aa949f;
          }
          if (*(int *)puVar2 != -1) {
            if (*(int *)puVar2 != 0) {
              LOCK();
              *(int *)puVar2 = *(int *)puVar2 + -1;
              local_31 = *(int *)puVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aa94e0;
            }
            QArrayData::deallocate((QArrayData *)puVar2,2,8);
          }
        }
LAB_100aa94e0:
        puVar5 = (uint *)*puVar1;
        if (1 < *puVar5) {
          FUN_100aaa190(puVar1,puVar5[1]);
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
            if ((bool)local_31) goto LAB_100aa9540;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
LAB_100aa9540:
      iVar3 = QByteArray::indexOf(param_1,0x1e4137b);
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
          if ((bool)local_31) goto LAB_100aa95be;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
LAB_100aa95be:
  FUN_100a74fc0(param_2);
  return;
}

