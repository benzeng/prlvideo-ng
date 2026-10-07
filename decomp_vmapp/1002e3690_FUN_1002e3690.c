
undefined8 FUN_1002e3690(long param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
  bVar1 = *(byte *)(param_1 + 0x57);
  iVar7 = FUN_1002dd300();
  uVar10 = 0;
  if (iVar7 != 0) {
    if (param_2 == 1) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x28))();
      if ((int)param_3 == 0) {
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[UVC] [ALT0] zero bandwidth selected");
        }
      }
      else {
        lVar9 = ((ulong)bVar1 - 1) * 0x26;
        cVar6 = (**(code **)(**(long **)(param_1 + 0x88) + 0x20))
                          (*(long **)(param_1 + 0x88),*(undefined2 *)(lVar5 + 0x8a + lVar9),
                           *(undefined2 *)(lVar5 + 0x8c + lVar9));
        if (cVar6 == '\0') {
          if (DAT_1011c568c < 0) {
            return 0;
          }
          FUN_1008e3970("","USB",0,"[UVC] [ALT%d] Video data source open error!",param_3);
          return 0;
        }
        *(undefined1 *)(param_1 + 0x84) = 0;
        if (-1 < DAT_1011c568c) {
          uVar2 = *(ushort *)(lVar5 + 0x5ca + (ulong)((int)param_3 - 1) * 0x10);
          iVar7 = ((uVar2 >> 0xb & 3) + 1) * (uVar2 & 0x7ff);
          uVar2 = *(ushort *)(lVar5 + 0x8a + lVar9);
          uVar3 = *(ushort *)(lVar5 + 0x8c + lVar9);
          uVar4 = *(uint *)(param_1 + 0x58);
          lVar8 = (ulong)uVar3 * (ulong)uVar2;
          FUN_1008e3970("","USB",0,
                        "[UVC] [ALT%d] %d (< %dKbps) : [FF%d.%d]  %dx%d (%d)  %dms (%dfps E [%d..%d]) -> %dKbps"
                        ,param_3,iVar7,iVar7 * 8,*(undefined1 *)(param_1 + 0x56),
                        *(undefined1 *)(param_1 + 0x57),uVar2,uVar3,(int)lVar8 * 2,uVar4 / 10000,
                        (int)(10000000 / (ulong)uVar4),
                        (int)(10000000 / (ulong)*(uint *)(lVar5 + 0xa3 + lVar9)),
                        (int)(10000000 / (ulong)*(uint *)(lVar5 + 0x9f + lVar9)),
                        (uint)((ulong)(lVar8 * 160000000) / (ulong)uVar4) >> 0xd);
        }
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}

