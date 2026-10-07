
void FUN_1002c0b30(long param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  long *local_48;
  long *local_40;
  uint local_34;
  
  local_34 = 0xffffffff;
  plVar9 = (long *)FUN_10070bb60(3,0x200);
  *(long **)(param_1 + 0x310) = plVar9;
  if (plVar9 == (long *)0x0) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[USB] Failed to create AIO worker, AIO disabled");
    }
  }
  else {
    pcVar3 = *(code **)(*plVar9 + 0x28);
    uVar10 = FUN_1002eefa0(*(undefined8 *)(param_1 + 0x40));
    (*pcVar3)(plVar9,uVar10);
  }
  lVar1 = param_1 + 0x48;
  bVar15 = true;
  bVar4 = false;
LAB_1002c0c14:
  do {
    cVar5 = FUN_1002583d0(param_1);
    if (cVar5 != '\0') {
      local_34 = 0;
    }
    bVar16 = cVar5 == '\0';
    if ((bVar4) && (DAT_1011c564c <= local_34)) {
      local_34 = DAT_1011c564c;
    }
    *(ulong *)(*(long *)(param_1 + 0x2c8) + 0xf0) = (ulong)local_34;
    uVar6 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),bVar16,(ulong)local_34,bVar16);
    switch(uVar6) {
    case 0xffff0002:
      local_34 = 0xffffffff;
      bVar15 = false;
      goto LAB_1002c0ceb;
    case 0xffff0003:
      if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x2e8) + 0x98))();
      }
      if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x2f0) + 0x98))();
      }
      bVar15 = true;
      if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x2f8) + 0x98))();
      }
    case 0xffff0001:
      lVar11 = FUN_100257d80(param_1);
      uVar7 = *(uint *)(lVar11 + 0x2030);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar11 + 0x2030);
        bVar16 = uVar7 == uVar2;
        if (bVar16) {
          *(uint *)(lVar11 + 0x2030) = uVar7 | 8;
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        UNLOCK();
      } while (!bVar16);
      break;
    case 0xffff0004:
      plVar9 = *(long **)(param_1 + 0x310);
      if (plVar9 != (long *)0x0) {
        do {
          iVar8 = 1;
          if (*(int *)((long)plVar9 + 0xc) != 0) {
            FUN_1008e3970("","USB",0,"AIO Wait/Submit recursion detected!");
            iVar8 = *(int *)((long)plVar9 + 0xc) + 1;
          }
          *(int *)((long)plVar9 + 0xc) = iVar8;
          iVar8 = (**(code **)(*plVar9 + 0x40))(plVar9,0xffffffff);
          *(int *)((long)plVar9 + 0xc) = *(int *)((long)plVar9 + 0xc) + -1;
          plVar9 = *(long **)(param_1 + 0x310);
        } while (iVar8 != 0);
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*(long **)(param_1 + 0x310) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x310) + 0x10))();
        }
        *(undefined8 *)(param_1 + 0x310) = 0;
      }
      return;
    }
    if (!bVar15) {
LAB_1002c0ceb:
      cVar5 = FUN_1002583d0(param_1);
      if (cVar5 != '\0') {
        lVar11 = FUN_1002584f0(lVar1);
        puVar12 = (undefined8 *)0x0;
        if (lVar11 != 0) {
          puVar12 = (undefined8 *)(lVar11 + -8);
        }
        cVar5 = (**(code **)*puVar12)(puVar12);
        if (cVar5 != '\0') {
          puVar14 = puVar12 + 1;
          if (puVar12 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
          }
          FUN_100258470(lVar1,puVar14);
        }
      }
      goto LAB_1002c0c14;
    }
    if (((*(int *)(param_1 + 0x2a8) == 0) && (*(int *)(param_1 + 0x2ac) == 0)) &&
       (*(char *)(param_1 + 0x2c4) == '\0')) {
      if (bVar4) {
        FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","!reconnect_pending",
                      "../Usb/AppUsb.cpp",0x73b,"adevEventLoop");
      }
    }
    else {
      FUN_100090a50(&local_40,DAT_1011c3698);
      cVar5 = QMutex::tryLock((int)param_1 + 0x298);
      plVar9 = local_40;
      bVar4 = true;
      if (cVar5 != '\0') {
        if (*(int *)(param_1 + 0x2a8) != 0) {
          local_48 = local_40;
          if (local_40 != (long *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          FUN_1002b6c50(param_1,&local_48);
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar13 = plVar9 + 1;
            lVar11 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (*(int *)(param_1 + 0x2ac) != 0) {
          FUN_1002b8ac0(param_1);
        }
        if (*(char *)(param_1 + 0x2c4) != '\0') {
          FUN_1002c11b0(param_1);
        }
        QMutex::unlock();
        bVar4 = false;
      }
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    cVar5 = FUN_1002583d0(param_1);
    if (cVar5 != '\0') {
      lVar11 = FUN_1002584f0(lVar1);
      plVar9 = (long *)0x0;
      if (lVar11 != 0) {
        plVar9 = (long *)(lVar11 + -8);
      }
      cVar5 = (**(code **)(*plVar9 + 8))(plVar9);
      if (cVar5 != '\0') {
        plVar13 = plVar9 + 1;
        if (plVar9 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        FUN_100258470(lVar1,plVar13);
      }
    }
    FUN_1002c14c0(param_1,&local_34);
    if (((*(int *)(param_1 + 0x2ac) != 0) &&
        (lVar11 = FUN_100257d80(param_1), (*(byte *)(lVar11 + 0x202c) & 2) != 0)) &&
       (1000000 < local_34)) {
      local_34 = 1000000;
    }
    cVar5 = FUN_1002583d0(param_1);
    if (cVar5 != '\0') {
      lVar11 = FUN_1002584f0(lVar1);
      plVar9 = (long *)0x0;
      if (lVar11 != 0) {
        plVar9 = (long *)(lVar11 + -8);
      }
      cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (cVar5 != '\0') {
        plVar13 = plVar9 + 1;
        if (plVar9 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        FUN_100258470(lVar1,plVar13);
      }
    }
  } while( true );
}

