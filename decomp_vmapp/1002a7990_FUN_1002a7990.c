
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a7990(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  int local_e8;
  int local_e4;
  size_t local_e0;
  int local_d8;
  undefined4 local_d4;
  ulong local_d0;
  char local_c8 [16];
  undefined4 local_b8 [4];
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d8 = 0;
  local_38 = lVar5;
  if (*(uint *)((long)param_1 + 0x85c) < 0xd2) {
    if (1 < DAT_1011b55f8) {
      pcVar6 = "Not using OpenGL";
      uVar7 = 2;
LAB_1002a7b19:
      FUN_1008e3970("","LocalDevices",uVar7,pcVar6);
    }
  }
  else {
    cVar1 = FUN_1002fde00();
    if (cVar1 == '\0') {
      pcVar6 = "Failed to initialize OpenGL 2.1";
      uVar7 = 0;
      goto LAB_1002a7b19;
    }
    if (*(char *)((long)param_1 + 0x844) == '\0') {
LAB_1002a7a7e:
      if (*(uint *)((long)param_1 + 0x85c) < 0xd3) goto LAB_1002a7b80;
      cVar1 = FUN_1002fdf30();
      if (cVar1 == '\0') {
        FUN_1008e3970("","LocalDevices",0,"Failed to initialize OpenGL 3.2, using 2.1");
        goto LAB_1002a7b43;
      }
      uVar2 = *(uint *)((long)param_1 + 0x85c);
      if (uVar2 < 0x141) {
LAB_1002a7ac1:
        local_98 = DAT_100b380c0;
        local_a8 = _DAT_100b380b0;
        uStack_a0 = _UNK_100b380b8;
        local_b8[0] = _DAT_100b380a0;
        local_b8[1] = _UNK_100b380a4;
        local_b8[2] = _UNK_100b380a8;
        local_b8[3] = _UNK_100b380ac;
        if (uVar2 < 0x140) goto LAB_1002a7b80;
      }
      else {
        cVar1 = FUN_1002fe5b0();
        if (cVar1 != '\0') {
          uVar2 = *(uint *)((long)param_1 + 0x85c);
          goto LAB_1002a7ac1;
        }
        FUN_1008e3970("","LocalDevices",0,"Failed to initialize OpenGL 4.1, using 3.2");
        *(undefined4 *)((long)param_1 + 0x85c) = 0x140;
        local_98 = DAT_100b380c0;
        local_a8 = _DAT_100b380b0;
        uStack_a0 = _UNK_100b380b8;
        local_b8[0] = _DAT_100b380a0;
        local_b8[1] = _UNK_100b380a4;
        local_b8[2] = _UNK_100b380a8;
        local_b8[3] = _UNK_100b380ac;
      }
    }
    else {
      local_e0 = 0x10;
      _sysctlbyname("hw.model",local_c8,&local_e0,(void *)0x0,0);
      if ((local_e0 == 0) ||
         ((iVar4 = _strcmp(local_c8,"MacBookPro6,1"), iVar4 != 0 &&
          (iVar4 = _strcmp(local_c8,"MacBookPro6,2"), iVar4 != 0)))) goto LAB_1002a7a7e;
LAB_1002a7b43:
      *(undefined4 *)((long)param_1 + 0x85c) = 0xd2;
LAB_1002a7b80:
      uStack_a0 = _UNK_100b380b8 & 0xffffffff;
      local_b8[0] = _DAT_100b380a0;
      local_b8[1] = _UNK_100b380a4;
      local_b8[2] = _UNK_100b380a8;
      local_b8[3] = _UNK_100b380ac;
      local_a8 = _DAT_100b380b0;
      local_98 = DAT_100b380c0;
    }
    _DAT_100b380a0 = local_b8[0];
    _UNK_100b380a4 = local_b8[1];
    _UNK_100b380a8 = local_b8[2];
    _UNK_100b380ac = local_b8[3];
    _DAT_100b380b0 = local_a8;
    DAT_100b380c0 = local_98;
    _CGLSetOption(0x5e8,0);
    lVar5 = FUN_1002ad660(param_1,local_b8);
    if (lVar5 != 0) {
      local_d0 = 0;
      iVar4 = _CGLCreateContext(lVar5,0,&local_d0);
      if (iVar4 == 0) {
        uVar10 = local_d0;
        if (param_1[0x10d] != 0) {
          _CGLGetVirtualScreen(param_1[0x10d],&local_d4);
          _CGLSetVirtualScreen(local_d0,local_d4);
          uVar10 = local_d0;
        }
      }
      else {
        FUN_1008e3970("","LocalDevices",0,"Failed to CGLCreateContext for GL context (%u)",iVar4);
        uVar10 = 0;
      }
      param_1[0x10d] = uVar10;
      _CGLDestroyPixelFormat(lVar5);
    }
    puVar9 = (ulong *)(param_1 + 0x10d);
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      if (0xd2 < *(uint *)((long)param_1 + 0x85c)) {
        *(undefined4 *)((long)param_1 + 0x85c) = 0xd2;
        uStack_a0 = uStack_a0 & 0xffffffff;
        lVar5 = FUN_1002ad660(param_1,local_b8);
        if (lVar5 != 0) {
          local_d0 = 0;
          iVar4 = _CGLCreateContext(lVar5,0,&local_d0);
          if (iVar4 == 0) {
            uVar10 = local_d0;
            if (*puVar9 != 0) {
              _CGLGetVirtualScreen(*puVar9,&local_d4);
              _CGLSetVirtualScreen(local_d0,local_d4);
              uVar10 = local_d0;
            }
          }
          else {
            FUN_1008e3970("","LocalDevices",0,"Failed to CGLCreateContext for GL context (%u)",iVar4
                         );
            uVar10 = 0;
          }
          *puVar9 = uVar10;
          _CGLDestroyPixelFormat(lVar5);
        }
        uVar10 = *puVar9;
        if (uVar10 != 0) goto LAB_1002a7d92;
        *(undefined4 *)((long)param_1 + 0x85c) = 0;
      }
LAB_1002a7dae:
      DAT_1011c5770 = DAT_1011c7420;
      DAT_1011c5b88 = DAT_1011c7428;
      DAT_1011c5e98 = DAT_1011c7430;
      DAT_1011c63c0 = DAT_1011c7438;
      uVar10 = *puVar9;
      if (uVar10 != 0) goto LAB_1002a7e07;
    }
    else {
LAB_1002a7d92:
      if (*(uint *)((long)param_1 + 0x85c) < 0x140) goto LAB_1002a7dae;
LAB_1002a7e07:
      uVar3 = FUN_1002ad820(param_1);
      _CGLSetVirtualScreen(uVar10,uVar3);
      FUN_1002ada20(param_1);
    }
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  lVar8 = param_1[0x10d];
  if (lVar8 != 0) {
    local_e4 = 0;
    local_e8 = 0;
    if (DAT_1011c4a88 != lVar8) {
      DAT_1011c4a88 = lVar8;
      _CGLSetCurrentContext();
    }
    local_d0 = local_d0 & 0xffffffff00000000;
    if ((int)param_1[0x10c] == -1) {
      iVar4 = FUN_1002afda0(param_1,local_b8,0x20);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = local_b8[local_d0 & 0xffffffff];
      }
      *(undefined4 *)(param_1 + 0x10c) = uVar3;
    }
    pcVar6 = (char *)(*DAT_1011c61a8)(0x1f02);
    if ((0 < DAT_1011b55f8) &&
       (FUN_1008e3970("","LocalDevices",1,"GL_VERSION = %s",pcVar6), 0 < DAT_1011b55f8)) {
      uVar7 = (*DAT_1011c61a8)(0x1f01);
      FUN_1008e3970("","LocalDevices",1,"GL_RENDERER = %s",uVar7);
      if (0 < DAT_1011b55f8) {
        uVar7 = (*DAT_1011c61a8)(0x1f00);
        FUN_1008e3970("","LocalDevices",1,"GL_VENDOR = %s",uVar7);
        if (0 < DAT_1011b55f8) {
          uVar7 = (*DAT_1011c61a8)(0x8b8c);
          FUN_1008e3970("","LocalDevices",1,"GL_SHADING_LANGUAGE_VERSION = %s",uVar7);
        }
      }
    }
    if (pcVar6 != (char *)0x0) {
      _sscanf(pcVar6,"%d.%d",&local_e4,&local_e8);
    }
    if (0xd2 < *(uint *)((long)param_1 + 0x85c)) {
      if ((local_e4 < 3) || ((local_e4 == 3 && (local_e8 < 2)))) {
        *(undefined4 *)((long)param_1 + 0x85c) = 0xd2;
      }
      else if ((0x140 < *(uint *)((long)param_1 + 0x85c)) &&
              ((local_e4 < 4 || ((local_e4 == 4 && (local_e8 < 1)))))) {
        *(undefined4 *)((long)param_1 + 0x85c) = 0x140;
      }
    }
    FUN_1002ad430(param_1);
    (*DAT_1011c5e98)(1,&local_d8);
    (*DAT_1011c5770)(local_d8);
    (*DAT_1011c5e38)(1,(long)param_1 + 0x11884);
    (*DAT_1011c5708)(0x8892,*(undefined4 *)((long)param_1 + 0x11884));
    (*DAT_1011c57d8)(0x8892,0x840,&DAT_101116290,0x88e4);
    (*DAT_1011c72b0)(0,2,0x1406,0,8,0);
    (*DAT_1011c5c90)(0);
    (*DAT_1011c5bc0)(0xbd0);
    (*DAT_1011c5bc0)(0xbe2);
    (*DAT_1011c5bc0)(0xb90);
    (*DAT_1011c6b18)(0);
    (*DAT_1011c5bc0)(0xb71);
    (*DAT_1011c5ba0)(0);
    (*DAT_1011c68d8)(0x405);
    (*DAT_1011c5c00)(0x405);
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"Using OpenGL %u",*(undefined4 *)((long)param_1 + 0x85c));
    }
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (param_1[0x10d] != 0) goto LAB_1002a815a;
  }
  FUN_1008e3970("","LocalDevices",0,"Can\'t initialize OpenGL");
LAB_1002a815a:
  (**(code **)(*param_1 + 0x40))(param_1);
  lVar8 = -0x8f00;
  do {
    FUN_1002adbf0(param_1,(long)param_1 + lVar8 + 0x9830);
    if (*(long *)((long)param_1 + lVar8 + 0x98b8) != 0) {
      FUN_1002add10();
      FUN_1002ade20();
      *(undefined8 *)((long)param_1 + lVar8 + 0x98b8) = 0;
    }
    lVar8 = lVar8 + 0x8f0;
  } while (lVar8 != 0);
  if (param_1[0x109] != 0) {
    _CGLDestroyPixelFormat();
  }
  if (param_1[0x10a] != 0) {
    _CGLDestroyPixelFormat();
  }
  lVar8 = param_1[0x10d];
  if (lVar8 != 0) {
    if (DAT_1011c4a88 != lVar8) {
      DAT_1011c4a88 = lVar8;
      _CGLSetCurrentContext();
    }
    (*DAT_1011c5770)(0);
    if (local_d8 != 0) {
      (*DAT_1011c5b88)(1,&local_d8);
    }
    (*DAT_1011c5b10)(1,(long)param_1 + 0x11884);
    (*DAT_1011c6ee0)(0);
    (*DAT_1011c5b40)(*(undefined4 *)((long)param_1 + 0x11874));
    (*DAT_1011c5b40)((int)param_1[0x230f]);
    (*DAT_1011c5b40)(*(undefined4 *)((long)param_1 + 0x1187c));
    (*DAT_1011c5b40)((int)param_1[0x2310]);
    if (DAT_1011c4a88 != 0) {
      DAT_1011c4a88 = 0;
      _CGLSetCurrentContext(0);
    }
    FUN_1002ade20();
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",2,"Root GL context was destroyed");
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

