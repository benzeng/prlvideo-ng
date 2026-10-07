
QVariant * FUN_1008e89e0(QVariant *param_1,long *param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  FUN_1008e8f00(param_2,param_3);
  iVar3 = *param_3 + 1;
  *param_3 = iVar3;
  lVar5 = *param_2;
  if (iVar3 != *(int *)(lVar5 + 4)) {
    do {
      iVar1 = iVar3 + 1;
      *param_3 = iVar1;
      sVar2 = *(short *)(*(long *)(lVar5 + 0x10) + lVar5 + (long)iVar3 * 2);
      if (sVar2 == 0x22) {
        QVariant::QVariant(param_1,&local_40);
        goto LAB_1008e8c23;
      }
      if (sVar2 == 0x5c) {
        if (iVar1 == *(int *)(lVar5 + 4)) break;
        *param_3 = iVar3 + 2;
        sVar2 = *(short *)(*(long *)(lVar5 + 0x10) + lVar5 + (long)iVar1 * 2);
        if (sVar2 < 0x6e) {
          if (sVar2 < 0x2f) {
            if (sVar2 == 0x22) {
              QString::append(&local_40,0x22);
            }
          }
          else if (sVar2 < 0x62) {
            if (sVar2 == 0x2f) {
              QString::append(&local_40,0x2f);
            }
            else if (sVar2 == 0x5c) {
              QString::append(&local_40,0x5c);
            }
          }
          else if (sVar2 == 0x62) {
            QString::append(&local_40,8);
          }
          else if (sVar2 == 0x66) {
            QString::append(&local_40,0xc);
          }
        }
        else {
          switch((int)sVar2 - 0x6eU & 0xffff) {
          case 0:
            QString::append(&local_40,10);
            break;
          case 4:
            QString::append(&local_40,0xd);
            break;
          case 6:
            QString::append(&local_40,9);
            break;
          case 7:
            if (*(int *)(lVar5 + 4) - (iVar3 + 2) < 4) goto LAB_1008e8bff;
            QString::mid((int)&local_48,(int)param_2);
            uVar4 = QString::toInt((bool *)&local_48,0);
            QString::append(&local_40,uVar4);
            *param_3 = *param_3 + 4;
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) break;
              }
              QArrayData::deallocate(local_48,2,8);
            }
          }
        }
      }
      else {
        QString::append(&local_40);
      }
      iVar3 = *param_3;
      lVar5 = *param_2;
    } while (iVar3 != *(int *)(lVar5 + 4));
  }
LAB_1008e8bff:
  *param_4 = 0;
  *(undefined4 *)(param_1 + 8) = 0x80000000;
  *(undefined8 *)param_1 = 0;
LAB_1008e8c23:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

