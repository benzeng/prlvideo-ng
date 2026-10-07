
undefined8 FUN_1000b35f0(long param_1,long *param_2,uint param_3)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  QString *pQVar5;
  undefined8 uVar6;
  bool bVar7;
  QArrayData *local_50;
  QTypedArrayData<unsigned_short> *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_3 < 2) {
    uVar6 = 0x80000011;
    if (*(long *)(param_1 + 0x107e8 + (ulong)param_3 * 8) == 0) {
      lVar4 = *param_2;
      if (*(int *)(lVar4 + 8) == *(int *)(lVar4 + 0xc)) {
        uVar2 = 0;
      }
      else {
        pQVar5 = (QString *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
        uVar2 = 0;
        do {
          local_48 = pQVar5->field0_0x0;
          if (1 < *(int *)local_48 + 1U) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
          }
          if (*(int *)(local_48 + 4) == 0) {
            bVar1 = true;
            FUN_1008e3970("","vm",0,"Invalid StartDebugger command format");
          }
          else {
            local_50 = (QArrayData *)QString::fromAscii_helper("--port",6);
            iVar3 = QString::compare(&local_48,&local_50,1);
            if (iVar3 == 0) {
              pQVar5 = pQVar5 + 1;
              bVar7 = pQVar5 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
            }
            else {
              bVar7 = false;
            }
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000b3768;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1000b3768:
            bVar1 = false;
            if (bVar7) {
              QString::operator=(&local_40,pQVar5);
              uVar2 = QString::toUInt((bool *)&local_40,0);
              bVar1 = false;
            }
          }
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b37c0;
            }
            QArrayData::deallocate((QArrayData *)local_48,2,8);
          }
LAB_1000b37c0:
          uVar6 = 0x80000009;
          if (bVar1) goto LAB_1000b3841;
          pQVar5 = pQVar5 + 1;
        } while (pQVar5 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
      }
      uVar6 = 0;
      lVar4 = FUN_1000c2190(param_1,param_3,uVar2,0);
      *(long *)(param_1 + 0x107e8 + (ulong)param_3 * 8) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x80000590;
        FUN_1008e3970("","vm",0,"Failed to start debugger with type %d port %d",param_3,uVar2);
      }
    }
  }
  else {
    uVar6 = 0x80000009;
    FUN_1008e3970("","vm",0,"Invalid StartDebugger type %d",param_3);
  }
LAB_1000b3841:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar6;
}

