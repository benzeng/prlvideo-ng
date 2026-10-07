
void FUN_1002b8ac0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  byte bVar9;
  ulong uVar10;
  byte bVar11;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [8];
  uint *local_40;
  undefined1 local_31;
  
  if (1 < DAT_1011c568c) {
    bVar11 = false;
    if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x2e8) + 0x78))();
      bVar11 = iVar2 == 2;
    }
    if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x78))();
      if (iVar2 == 2) {
        bVar11 = bVar11 + 2;
      }
    }
    bVar9 = bVar11;
    if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x78))();
      bVar9 = bVar11 | 4;
      if (iVar2 != 2) {
        bVar9 = bVar11;
      }
    }
    FUN_1008e3970("","USB",0,"[DELAYED] ready:%x onboot:%x",bVar9,*(undefined4 *)(param_1 + 0x2a8));
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  puVar4 = *(uint **)(param_1 + 0x2a0);
  if (puVar4[3] != puVar4[2]) {
    puVar1 = (undefined8 *)(param_1 + 0x2a0);
    do {
      if (1 < *puVar4) {
        FUN_100022c80(puVar1,puVar4[1]);
        puVar4 = (uint *)*puVar1;
      }
      local_50 = *(QArrayData **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        puVar4 = (uint *)*puVar1;
      }
      if (1 < *puVar4) {
        FUN_100022c80(puVar1,puVar4[1]);
        puVar4 = (uint *)*puVar1;
      }
      local_40 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
      FUN_10005a450(local_48,puVar1,&local_40);
      uVar3 = FUN_1002b9040(&local_50);
      if ((uVar3 != 0xffffffff) && (uVar10 = (ulong)uVar3, (&DAT_1011c4aa0)[uVar10 * 0xc] == 5)) {
        plVar7 = (long *)(param_1 + 0x2f8);
        if ((uVar3 < 0x2f) && (plVar7 = (long *)(param_1 + 0x2e8), 0x1f < uVar3)) {
          plVar7 = (long *)(param_1 + 0x2f0);
        }
        if (*plVar7 != 0) {
          lVar6 = 3;
          if (uVar3 < 0x2f) {
            lVar6 = (ulong)(0x1f < uVar3) + 1;
          }
          if ((*(uint *)(&DAT_100b381c0 + lVar6 * 4) & *(uint *)(param_1 + 0x2a8)) == 0) {
            plVar7 = (long *)(param_1 + 0x2f8);
            if ((uVar3 < 0x2f) && (plVar7 = (long *)(param_1 + 0x2e8), 0x1f < uVar3)) {
              plVar7 = (long *)(param_1 + 0x2f0);
            }
            (**(code **)(*(long *)*plVar7 + 0x28))((long *)*plVar7,&local_50);
            if (0 < DAT_1011c568c) {
              QString::toUtf8();
              FUN_1008e3970("","USB",0,"Delayed disconnect %s",local_58 + *(long *)(local_58 + 0x10)
                           );
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002b8d3a;
                }
                QArrayData::deallocate(local_58,1,8);
              }
            }
LAB_1002b8d3a:
            (&DAT_1011c4aa0)[uVar10 * 0xc] = 6;
            (&DAT_1011c4aa8)[uVar10 * 6] = 0;
          }
        }
      }
      if (*(int *)local_50 == 0) {
LAB_1002b8d80:
        QArrayData::deallocate(local_50,2,8);
      }
      else if (*(int *)local_50 != -1) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1002b8d80;
      }
      puVar4 = (uint *)*puVar1;
    } while (puVar4[3] != puVar4[2]);
  }
  puVar8 = &DAT_1011c4ac0;
  uVar10 = 0;
  do {
    if (((*(int *)(puVar8 + -0x20) == 6) && (*(long *)(puVar8 + -0x18) != -1)) &&
       (*(int *)(puVar8 + -0x1c) == 0)) {
      if (0 < DAT_1011c568c) {
        QString::toUtf8();
        FUN_1008e3970("","USB",0,"reconnect [%u] PS=%u <%s>",uVar10 & 0xffffffff,6,
                      local_60 + *(long *)(local_60 + 0x10));
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b8e59;
          }
          QArrayData::deallocate(local_60,1,8);
        }
      }
LAB_1002b8e59:
      if ((*(long *)(puVar8 + -0x18) == 0) ||
         (uVar5 = FUN_1007d87f0(), *(long *)(puVar8 + -0x18) + 10000000U <= uVar5)) {
        if (0 < DAT_1011c568c) {
          QString::toUtf8();
          FUN_1008e3970("","USB",0,"Delayed connect %s",local_68 + *(long *)(local_68 + 0x10));
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b8ef7;
            }
            QArrayData::deallocate(local_68,1,8);
          }
        }
LAB_1002b8ef7:
        FUN_1002b8890(param_1,0,puVar8 + -8,puVar8,*(undefined4 *)(puVar8 + -0x10),1);
      }
      else {
        *(undefined4 *)(param_1 + 0x2ac) = 1;
      }
    }
    uVar10 = uVar10 + 1;
    puVar8 = puVar8 + 0x30;
    if (0x3c < uVar10) {
      return;
    }
  } while( true );
}

