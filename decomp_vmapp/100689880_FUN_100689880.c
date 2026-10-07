
void FUN_100689880(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  QArrayData *pQVar9;
  long *plVar10;
  bool bVar11;
  int local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((long *)*param_1 != param_1 + 1) {
    local_5c = 0;
    plVar8 = (long *)*param_1;
    do {
      if (2 < DAT_1011b55f8) {
        uVar1 = *(undefined4 *)((long)plVar8 + 0x44);
        lVar2 = plVar8[6];
        lVar3 = plVar8[7];
        lVar4 = plVar8[0xd];
        lVar5 = plVar8[0xe];
        lVar6 = plVar8[8];
        FUN_1007d6a70(&local_48,plVar8 + 9);
        QString::toUtf8();
        pQVar9 = local_40 + *(long *)(local_40 + 0x10);
        FUN_1007d6a70(&local_58,plVar8 + 0xb);
        QString::toUtf8();
        FUN_1008e3970("","dimg",3,
                      "Partition %u: Type %x Start %llu End %llu\n Table %llu Entry %u Bootable %u Type %s Id %s"
                      ,local_5c,uVar1,lVar2,lVar3,lVar4,(int)lVar5,(int)lVar6,pQVar9,
                      local_50 + *(long *)(local_50 + 0x10));
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006899b5;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_1006899b5:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006899e5;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1006899e5:
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100689a19;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100689a19:
        local_5c = local_5c + 1;
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100689a53;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_100689a53:
      plVar7 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar8[2];
          bVar11 = (long *)*plVar10 != plVar8;
          plVar8 = plVar10;
        } while (bVar11);
      }
      else {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar8 = plVar10;
    } while (plVar10 != param_1 + 1);
  }
  return;
}

