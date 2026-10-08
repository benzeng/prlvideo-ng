
void FUN_1000a1a00(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  uint local_e4;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined1 local_c0 [32];
  QString local_a0;
  int *local_98;
  int *local_90;
  undefined4 local_88;
  byte local_84;
  long local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  uint local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [39];
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,(QString *)(param_1 + 0x20));
  if ((lVar5 != 0) && (lVar5 = FUN_10018d490(lVar5), lVar5 != 0)) {
    uVar4 = FUN_10016f500(lVar5);
    cVar2 = FUN_10061c2b0(uVar4,0x10080);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x29) != '\0')) {
      FUN_1000a3d00(local_58,0);
      uVar4 = FUN_1000a4ac0();
      FUN_1000a5770(local_60,uVar4);
      FUN_1000a4830(&local_80,local_60);
      local_78 = (undefined8 *)(local_80 + 0x10 + (long)*(int *)(local_80 + 8) * 8);
      local_70 = (undefined8 *)(local_80 + 0x10 + (long)*(int *)(local_80 + 0xc) * 8);
      local_68 = 1;
      if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
        do {
          puVar1 = (undefined8 *)*local_78;
          local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar1;
          if (1 < *(int *)local_a0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
          }
          local_98 = (int *)puVar1[1];
          if (1 < *local_98 + 1U) {
            LOCK();
            *local_98 = *local_98 + 1;
            local_31 = *local_98 != 0;
            UNLOCK();
          }
          local_90 = (int *)puVar1[2];
          if (1 < *local_90 + 1U) {
            LOCK();
            *local_90 = *local_90 + 1;
            local_31 = *local_90 != 0;
            UNLOCK();
          }
          local_84 = *(byte *)((long)puVar1 + 0x1c);
          local_88 = *(undefined4 *)(puVar1 + 3);
          if (local_68 != 0) {
            cVar2 = operator==(&local_a0,(QString *)(param_1 + 0x20));
            if (cVar2 == '\0') {
              FUN_1000a3d00(local_c0,0);
              QString::toUtf8();
              QByteArray::QByteArray
                        ((QByteArray *)&local_c8,(char *)(local_d0 + *(long *)(local_d0 + 0x10)),-1)
              ;
              if (*(int *)local_d0 != -1) {
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_31 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000a1bcb;
                }
                QArrayData::deallocate(local_d0,1,8);
              }
LAB_1000a1bcb:
              FUN_1000a3be0(local_c0,local_c8 + *(long *)(local_c8 + 0x10),
                            *(undefined4 *)(local_c8 + 4),0x200b);
              QString::toUtf8();
              QByteArray::QByteArray
                        ((QByteArray *)&local_d8,(char *)(local_e0 + *(long *)(local_e0 + 0x10)),-1)
              ;
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000a1c4e;
                }
                QArrayData::deallocate(local_e0,1,8);
              }
LAB_1000a1c4e:
              FUN_1000a3be0(local_c0,local_d8 + *(long *)(local_d8 + 0x10),
                            *(undefined4 *)(local_d8 + 4),0x200c);
              local_e4 = (uint)local_84;
              FUN_1000a3be0(local_c0,&local_e4,4,0x2010);
              FUN_1000a3be0(local_c0,&local_88,4,0x200f);
              uVar4 = FUN_100a67f30(local_c0);
              uVar3 = FUN_100a67f40(local_c0);
              FUN_1000a3be0(local_58,uVar4,uVar3,0x200a);
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000a1d28;
                }
                QArrayData::deallocate(local_d8,1,8);
              }
LAB_1000a1d28:
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000a1d5e;
                }
                QArrayData::deallocate(local_c8,1,8);
              }
LAB_1000a1d5e:
              FUN_100a681d0(local_c0);
            }
            local_68 = 0;
          }
          FUN_1000a3d70(&local_a0);
          local_78 = local_78 + 1;
          uVar6 = local_68 ^ 1;
          bVar7 = local_68 != 1;
          local_68 = uVar6;
        } while ((bVar7) && (local_78 != local_70));
      }
      FUN_1000a3c50(&local_80);
      uVar4 = FUN_100a67f30(local_58);
      uVar3 = FUN_100a67f40(local_58);
      FUN_1000a2110(param_1,1,2,uVar4,uVar3);
      FUN_1000a3c50(local_60);
      FUN_100a681d0(local_58);
    }
  }
  return;
}

