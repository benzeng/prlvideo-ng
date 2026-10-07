
void FUN_1005e5c50(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QBuffer local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
    plVar3 = *(long **)(param_1 + 0x20);
    do {
      local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
      QBuffer::QBuffer(local_50,(QByteArray *)&local_40,(QObject *)0x0);
      QBuffer::open(local_50,2);
      lVar1 = *(long *)(*(long *)(plVar3[6] + 0x10) + 0x200);
      uVar4 = 0;
      if (lVar1 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x10);
      }
      uVar4 = FUN_1006b1100(uVar4,local_50,0);
      QFileInfo::fileName();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"VMDK=%s, wr=%lld\n",local_58 + *(long *)(local_58 + 0x10),uVar4);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e5d73;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1005e5d73:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e5da3;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005e5da3:
      FUN_1008e3970("","vdisk",0,"==============================================================\n")
      ;
      if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
      }
      FUN_1008e3970("","vdisk",0,"%s",local_40 + *(long *)(local_40 + 0x10));
      FUN_1008e3970("","vdisk",0,"============================================================\n\n")
      ;
      QBuffer::~QBuffer(local_50);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e5e4c;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1005e5e4c:
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar3[2];
          bVar6 = (long *)*plVar5 != plVar3;
          plVar3 = plVar5;
        } while (bVar6);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar3 = plVar5;
    } while (plVar5 != (long *)(param_1 + 0x28));
  }
  QMutex::unlock();
  return;
}

