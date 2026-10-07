
void FUN_10033a670(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(ushort *)(param_2 + lVar7 * 8);
      uVar8 = (uint)uVar1;
      uVar2 = *(ushort *)(param_2 + 2 + lVar7 * 8);
      uVar3 = *(undefined4 *)(param_2 + 4 + lVar7 * 8);
      if (uVar1 < 0x10) {
LAB_10033a6dd:
        if (uVar2 < 0x23) {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),uVar8 * 0x40 + 0x100 + (uint)uVar2,uVar3);
          if ((uVar2 == 0x22) &&
             (uVar8 = *(uint *)(param_1 + 0x8270 + (ulong)(uVar8 * 0x40 + 0x100) * 4), uVar8 != 0))
          {
            for (puVar5 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                                    (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
                puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
              if (*puVar5 == uVar8) {
                lVar4 = *(long *)(puVar5 + 2);
                if (lVar4 != 0) {
                  FUN_10032efd0(*(undefined8 *)(lVar4 + 8),uVar3);
                  *(undefined1 *)(*(long *)(lVar4 + 8) + 0x88) = 1;
                }
                break;
              }
            }
          }
        }
      }
      else if ((uVar1 != 0x100) && ((ushort)(uVar1 - 0x101) < 4)) {
        uVar8 = uVar1 - 0xf1;
        goto LAB_10033a6dd;
      }
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (iVar6 != param_3 + -1);
  }
  return;
}

