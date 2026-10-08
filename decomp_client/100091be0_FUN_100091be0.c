
undefined8 * FUN_100091be0(undefined8 *param_1,long param_2,long *param_3,char param_4,int param_5)

{
  long lVar1;
  QString *pQVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_3;
  if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
    puVar5 = (undefined8 *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    do {
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      pQVar2 = (QString *)*puVar5;
      if (param_5 == 0) {
        QString::operator=(&local_40,pQVar2);
      }
      else if (*(int *)&pQVar2[2].field0_0x0 == 0) {
        if (((ulong)pQVar2[2].field0_0x0 & 0x200000000) == 0) {
          QString::operator=(&local_40,pQVar2 + 1);
        }
        else {
          if (param_4 == '\0') {
            pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
          }
          else {
            pQVar4 = (QArrayData *)QString::fromAscii_helper("*",1);
          }
          if (1 < *(int *)pQVar4 + 1U) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + 1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
          }
          local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
          QString::append(&local_48);
          QString::operator=(&local_40,&local_48);
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100091e0c;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
LAB_100091e0c:
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              local_31 = *(int *)pQVar4 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100091e40;
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
        }
      }
      else if (param_5 == 1) {
        uVar3 = FUN_100319c30(*(undefined8 *)(param_2 + 0x20));
        local_58 = *(QArrayData **)*puVar5;
        if (1 < *(int *)local_58 + 1U) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
        FUN_10032fdd0(uVar3,&local_58,&local_40);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100091e40;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
      else if (param_5 == 2) {
        uVar3 = FUN_100319c30(*(undefined8 *)(param_2 + 0x20));
        local_50 = *(QArrayData **)*puVar5;
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        FUN_10032fd10(uVar3,&local_50,&local_40);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100091e40;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
LAB_100091e40:
      FUN_1000341d0(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100091e7d;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100091e7d:
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8));
  }
  return param_1;
}

