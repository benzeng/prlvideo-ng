
undefined4 FUN_1002f4280(long *param_1,uint param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  byte local_561;
  long *local_560;
  long *local_558;
  undefined4 local_54c;
  undefined8 local_548;
  undefined4 local_540;
  byte local_539;
  utsname local_538;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  (**(code **)(*param_1 + 0x20))();
  lVar11 = 6;
  do {
    if ((long *)param_1[lVar11] != (long *)0x0) {
      (**(code **)(*(long *)param_1[lVar11] + 0x48))();
      (**(code **)(*(long *)param_1[lVar11] + 0x18))();
      param_1[lVar11] = 0;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x106);
  iVar4 = _uname(&local_538);
  if ((iVar4 < 0) || (iVar4 = _strcmp(local_538.release,"9.6.0"), iVar4 == 0)) {
    if (param_2 != 0) {
      local_539 = 0;
      iVar4 = (**(code **)(*(long *)param_1[5] + 0x98))((long *)param_1[5],&local_539);
      if ((iVar4 == 0) && (local_539 != 0)) {
        uVar10 = 0;
        do {
          local_538.sysname[0] = '\0';
          local_538.sysname[1] = '\0';
          local_538.sysname[2] = '\0';
          local_538.sysname[3] = '\0';
          local_538.sysname[4] = '\0';
          local_538.sysname[5] = '\0';
          local_538.sysname[6] = '\0';
          local_538.sysname[7] = '\0';
          iVar4 = (**(code **)(*(long *)param_1[5] + 0xa8))
                            ((long *)param_1[5],uVar10 & 0xff,&local_538);
          if (((iVar4 == 0) && (local_538.sysname._0_8_ != 0)) &&
             (*(byte *)(local_538.sysname._0_8_ + 5) == param_2)) {
            if (-1 < (int)uVar10) goto LAB_1002f4320;
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_539);
      }
    }
    iVar4 = -0x1fffbfaa;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,
                    "[%s] macos 10.5.6 workaround: banned setting configuration %u for device!",
                    param_1[1] + 0x838,param_2);
      iVar4 = -0x1fffbfaa;
      goto LAB_1002f44a5;
    }
  }
  else {
LAB_1002f4320:
    plVar1 = (long *)param_1[5];
    iVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2 & 0xff);
    if (iVar4 == 0) {
      iVar4 = (**(code **)*param_1)(param_1,param_2);
      if (iVar4 == 0) {
        uVar12 = 0;
        if (DAT_1011c568c < 0) goto LAB_1002f44eb;
        lVar11 = param_1[1];
        pcVar9 = "[%s] Can\'t get configuration %u for device!";
      }
      else {
        local_540 = 0;
        local_548 = 0xffffffffffffffff;
        plVar1 = (long *)param_1[5];
        param_2 = (**(code **)(*plVar1 + 0xe0))(plVar1,&local_548,&local_540);
        if (param_2 == 0) {
          iVar4 = _IOIteratorIsValid(local_540);
          plVar1 = param_1 + 1;
          if (iVar4 != 0) {
            do {
              iVar4 = _IOIteratorNext(local_540);
              if (iVar4 == 0) break;
              local_54c = 0;
              local_558 = (long *)0x0;
              uVar6 = _CFUUIDGetConstantUUIDWithBytes
                                (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5,
                                 0x28,0x61);
              uVar7 = _CFUUIDGetConstantUUIDWithBytes
                                (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,
                                 0xc6,0x42,0x6f);
              iVar5 = FUN_1002f3df0(iVar4,uVar6,uVar7,&local_558,&local_54c);
              _IOObjectRelease(iVar4);
              plVar3 = local_558;
              if ((iVar5 == 0) && (local_558 != (long *)0x0)) {
                local_560 = (long *)0x0;
                pcVar2 = *(code **)(*local_558 + 8);
                uVar6 = _CFUUIDGetConstantUUIDWithBytes
                                  (0,100,0xba,0xbd,0xd2,0xf,0x6b,0x4b,0x4f,0x8e,0x3e,0xdc,0x36,4,
                                   0x69,0x87,0xad);
                auVar13 = _CFUUIDGetUUIDBytes(uVar6);
                iVar4 = (*pcVar2)(plVar3,auVar13._0_8_,auVar13._8_8_,&local_560);
                (**(code **)(*local_558 + 0x18))();
                local_558 = (long *)0x0;
                if ((iVar4 == 0) && (local_560 != (long *)0x0)) {
                  iVar4 = (**(code **)(*local_560 + 0x160))();
                  if (iVar4 == -0x1ffffd3b) {
                    _usleep(10000);
                    iVar4 = (**(code **)(*local_560 + 0x160))();
                    if (iVar4 != -0x1ffffd3b) goto LAB_1002f4878;
                    _usleep(10000);
                    iVar4 = (**(code **)(*local_560 + 0x160))();
                    if (iVar4 != -0x1ffffd3b) goto LAB_1002f4878;
                    _usleep(10000);
                    iVar4 = (**(code **)(*local_560 + 0x160))();
                    if (iVar4 != -0x1ffffd3b) goto LAB_1002f4878;
                    _usleep(10000);
                    iVar4 = (**(code **)(*local_560 + 0x160))();
                    if (iVar4 != -0x1ffffd3b) goto LAB_1002f4878;
                    _usleep(10000);
                    iVar4 = -0x1ffffd3b;
                  }
                  else {
LAB_1002f4878:
                    if (iVar4 == 0) {
                      local_561 = 0;
                      iVar4 = (**(code **)(*local_560 + 0x88))(local_560,&local_561);
                      if (iVar4 == 0) {
                        param_1[(ulong)local_561 + 6] = (long)local_560;
                        FUN_1002d6370(param_1[1],(ulong)local_561,0,1);
                      }
                      else if (-1 < DAT_1011c568c) {
                        FUN_1008e3970("","USB",0,"[%s] Failed get/set intf %X!",*plVar1 + 0x838);
                      }
                      goto LAB_1002f4990;
                    }
                  }
                  if (-1 < DAT_1011c568c) {
                    FUN_1008e3970("","USB",0,"[%s] Unable to open interface %X!",*plVar1 + 0x838,
                                  iVar4);
                  }
                  *(int *)(param_1 + 4) = iVar4;
                  (**(code **)(*local_560 + 0x18))();
                  break;
                }
                if (-1 < DAT_1011c568c) {
                  FUN_1008e3970("","USB",0,"[%s] Couldn\'t create a interface interface %X!",
                                *plVar1 + 0x838,iVar4);
                }
              }
              else if (-1 < DAT_1011c568c) {
                FUN_1008e3970("","USB",0,"[%s] Unable to create a plugin %X!",*plVar1 + 0x838,iVar5)
                ;
              }
LAB_1002f4990:
              iVar4 = _IOIteratorIsValid(local_540);
            } while (iVar4 != 0);
          }
          _IOObjectRelease(local_540);
          pvVar8 = operator_new(0x28);
          FUN_1002f50d0(pvVar8,*plVar1);
          param_1[0x106] = (long)pvVar8;
          uVar12 = 1;
          goto LAB_1002f44eb;
        }
        uVar12 = 0;
        if (DAT_1011c568c < 0) goto LAB_1002f44eb;
        lVar11 = param_1[1];
        pcVar9 = "[%s] Can\'t create an interface iterator (0x%x)!";
      }
      uVar12 = 0;
      FUN_1008e3970("","USB",0,pcVar9,lVar11 + 0x838,param_2);
      goto LAB_1002f44eb;
    }
LAB_1002f44a5:
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Can\'t set configuration %u for device (0x%x)!",
                    param_1[1] + 0x838,param_2,iVar4);
    }
  }
  *(int *)(param_1 + 4) = iVar4;
  uVar12 = 0;
LAB_1002f44eb:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

