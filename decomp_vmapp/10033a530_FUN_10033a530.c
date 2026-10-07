
void FUN_10033a530(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_2 + lVar8 * 8);
      if (uVar1 < 0x10) {
        uVar2 = *(ushort *)(param_2 + 2 + lVar8 * 8);
        uVar3 = *(undefined4 *)(param_2 + 4 + lVar8 * 8);
        if (uVar2 < 0x1d) {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),(uint)uVar1 * 0x40 + 0x100 + (uint)uVar2,uVar3);
        }
        else if (uVar2 == 0x22) {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),(uint)uVar1 * 0x40 + 0x122,uVar3);
          uVar4 = *(uint *)(param_1 + 0x8670 + (ulong)uVar1 * 0x100);
          if (uVar4 != 0) {
            for (puVar6 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                                    (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
                puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
              if (*puVar6 == uVar4) {
                lVar5 = *(long *)(puVar6 + 2);
                if (lVar5 != 0) {
                  FUN_10032efd0(*(undefined8 *)(lVar5 + 8),uVar3);
                  *(undefined1 *)(*(long *)(lVar5 + 8) + 0x88) = 1;
                }
                break;
              }
            }
          }
        }
      }
      iVar7 = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (iVar7 != param_3 + -1);
  }
  return;
}

