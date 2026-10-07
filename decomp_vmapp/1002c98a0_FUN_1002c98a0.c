
undefined8 FUN_1002c98a0(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  char *pcVar7;
  ulong uVar8;
  bool bVar9;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[UHC] Activity");
  }
  lVar5 = param_1[8];
  uVar6 = *(ushort *)(lVar5 + 0x2000);
  if ((uVar6 & 6) != 0) {
    if (-1 < DAT_1011c568c) {
      pcVar7 = "Controller";
      if ((uVar6 & 4) != 0) {
        pcVar7 = "Global";
      }
      FUN_1008e3970("","USB",0,"[UHC] %s reset",pcVar7);
      lVar5 = param_1[8];
    }
    *(undefined2 *)(lVar5 + 0x2002) = 0x20;
    *(undefined2 *)(lVar5 + 0x2004) = 0;
    *(undefined2 *)(lVar5 + 0x2006) = 0;
    *(undefined1 *)(lVar5 + 0x200c) = 0x40;
    *(undefined1 *)(lVar5 + 0x2018) = 0;
    (**(code **)(*param_1 + 0x58))(param_1,0);
    (**(code **)(*param_1 + 0x58))(param_1,1);
    lVar5 = param_1[8];
    *(ushort *)(lVar5 + 0x2000) = *(ushort *)(lVar5 + 0x2000) & 4;
    uVar3 = *(uint *)(lVar5 + 0x202c);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar5 + 0x202c);
      bVar9 = uVar3 == uVar1;
      if (bVar9) {
        *(uint *)(lVar5 + 0x202c) = uVar3 & 0xffffffef;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar9);
    return 0;
  }
  uVar2 = *(ushort *)(lVar5 + 0x2002);
  if ((uVar6 & 1) == 0) {
    if ((uVar2 & 0x20) != 0) goto LAB_1002c9a2f;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[UHC] DMA Stopped");
      lVar5 = param_1[8];
      uVar2 = *(ushort *)(lVar5 + 0x2002);
    }
    uVar2 = uVar2 | 0x20;
  }
  else {
    if ((uVar2 & 0x20) == 0) goto LAB_1002c9a2f;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[UHC] DMA Started");
      lVar5 = param_1[8];
      uVar2 = *(ushort *)(lVar5 + 0x2002);
    }
    uVar2 = uVar2 & 0xffdf;
  }
  *(ushort *)(lVar5 + 0x2002) = uVar2;
LAB_1002c9a2f:
  uVar8 = 0;
  bVar9 = false;
  do {
    uVar6 = *(ushort *)(lVar5 + 0x2010 + uVar8 * 2);
    if ((uVar6 & 0x200) == 0) {
      if ((*(byte *)(lVar5 + 0x2034 + uVar8 * 4) & 4) == 0) {
        if ((uVar6 & 1) != 0) {
          uVar2 = uVar6;
          if (1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] Disconnect port: %u",uVar8 & 0xffffffff);
            uVar2 = *(ushort *)(lVar5 + 0x2010 + uVar8 * 2);
          }
          uVar6 = uVar2 & 0xfffc | 2;
          *(ushort *)(lVar5 + 0x2010 + uVar8 * 2) = uVar6;
          bVar9 = true;
          if ((uVar2 & 4) != 0) {
            if (1 < DAT_1011c568c) {
              FUN_1008e3970("","USB",0,"[UHC] Disable port: %u",uVar8 & 0xffffffff);
              uVar6 = *(ushort *)(lVar5 + 0x2010 + uVar8 * 2);
            }
            uVar6 = uVar6 & 0xfff3 | 8;
LAB_1002c9bb1:
            bVar9 = true;
            *(ushort *)(lVar5 + 0x2010 + uVar8 * 2) = uVar6;
          }
        }
      }
      else if ((uVar6 & 1) == 0) {
        if (1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[UHC] Connect port: %u",uVar8 & 0xffffffff);
          uVar6 = *(ushort *)(lVar5 + 0x2010 + uVar8 * 2);
        }
        *(ushort *)(lVar5 + 0x2010 + uVar8 * 2) = uVar6 | 3;
        iVar4 = FUN_1002d6ce0(param_1[uVar8 + 0xc]);
        uVar6 = *(ushort *)(lVar5 + 0x2010 + uVar8 * 2);
        bVar9 = true;
        if (iVar4 == 0) {
          uVar6 = uVar6 | 0x100;
          goto LAB_1002c9bb1;
        }
      }
      if ((uVar6 & 0x1000) != 0) {
        *(ushort *)(lVar5 + 0x2010 + uVar8 * 2) = uVar6 | 0x40;
      }
    }
    else {
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[UHC] Reset port %u",uVar8 & 0xffffffff);
      }
      (**(code **)(*param_1 + 0x58))(param_1,uVar8 & 0xffffffff);
    }
    if (uVar8 == 1) {
      if (bVar9) {
        lVar5 = param_1[8];
        uVar6 = *(ushort *)(lVar5 + 0x2000);
        if ((uVar6 & 8) != 0) {
          if (1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[UHC] Global Resume");
            lVar5 = param_1[8];
            uVar6 = *(ushort *)(lVar5 + 0x2000);
          }
          *(ushort *)(lVar5 + 0x2000) = uVar6 | 0x10;
          (**(code **)(*param_1 + 0x40))(param_1,2);
        }
      }
      *(long *)(param_1[0x295] + 0xf0) = *(long *)(param_1[0x295] + 0xf0) + 1;
      return 0;
    }
    uVar8 = uVar8 + 1;
    lVar5 = param_1[8];
  } while( true );
}

