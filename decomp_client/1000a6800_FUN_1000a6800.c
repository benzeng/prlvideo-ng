
undefined1 FUN_1000a6800(QString *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 uVar6;
  QString local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  iVar2 = FUN_100154d30(uVar3);
  iVar5 = 0;
  uVar6 = 0;
  if (0 < iVar2) {
    uVar6 = 0;
    do {
      uVar3 = FUN_100152280();
      lVar4 = FUN_100154790(uVar3,iVar5);
      if (lVar4 != 0) {
        FUN_10015ccc0(&local_40,lVar4,param_1);
        bVar1 = true;
        if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
          FUN_100188480(&local_48,
                        *(undefined8 *)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10));
          QString::operator=(param_1,&local_48);
          uVar6 = 1;
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000a68c2;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
LAB_1000a68c2:
          bVar1 = false;
        }
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000a68eb;
          }
          QListData::dispose(local_40);
        }
LAB_1000a68eb:
        if (!bVar1) {
          return uVar6;
        }
      }
      iVar5 = iVar5 + 1;
      uVar3 = FUN_100152280();
      iVar2 = FUN_100154d30(uVar3);
    } while (iVar5 < iVar2);
  }
  return uVar6;
}

