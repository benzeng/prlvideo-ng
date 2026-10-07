
void FUN_10033a340(long param_1,long param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_2 + lVar8 * 8);
      if (uVar1 < 0x10) {
        uVar2 = *(ushort *)(param_2 + 2 + lVar8 * 8);
        uVar6 = *(uint *)(param_2 + 4 + lVar8 * 8);
        switch(uVar2) {
        case 0xc:
          iVar7 = (uint)uVar1 * 0x40;
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),iVar7 + 0x10d);
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),iVar7 + 0x10e,uVar6);
          break;
        case 0x10:
          if (uVar6 - 1 < 5) {
            uVar6 = *(uint *)(&DAT_100b3b520 + (long)(int)(uVar6 - 1) * 4);
          }
          else {
LAB_10033a40e:
            uVar6 = 0;
          }
          break;
        case 0x11:
          if (2 < uVar6 - 1) goto LAB_10033a40e;
          break;
        case 0x12:
          uVar6 = uVar6 - 1;
          if (2 < uVar6) {
            uVar6 = 0;
          }
        }
        if (uVar2 < 0x1d) {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),(uint)uVar1 * 0x40 + 0x100 + (uint)uVar2);
        }
        else if (uVar2 == 0x22) {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),(uint)uVar1 * 0x40 + 0x122);
          uVar3 = *(uint *)(param_1 + 0x8670 + (ulong)uVar1 * 0x100);
          if (uVar3 != 0) {
            for (puVar5 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                                    (ulong)((uVar3 >> 0xc ^ uVar3) & 0xfff ^ uVar3 >> 0x18) * 8);
                puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
              if (*puVar5 == uVar3) {
                lVar4 = *(long *)(puVar5 + 2);
                if (lVar4 != 0) {
                  FUN_10032efd0(*(undefined8 *)(lVar4 + 8),uVar6);
                  *(undefined1 *)(*(long *)(lVar4 + 8) + 0x88) = 1;
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

