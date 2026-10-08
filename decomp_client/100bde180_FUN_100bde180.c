
undefined8 FUN_100bde180(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar1 = *(long *)(param_1 + 0x80);
  lVar6 = *(long *)(param_1 + 0x130);
  lVar5 = *(long *)(param_1 + 0x68) + 0xd;
  *(long *)(lVar1 + 0x138) = lVar5;
  local_38 = lVar9;
  if (*(uint *)(lVar1 + 0x124) < 0x4541) {
    *(long *)(lVar1 + 0x130) = lVar5;
    uVar8 = 0;
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 200))(param_1,0);
    if (iVar2 == 0) {
      *(undefined4 *)(lVar1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100bde45b;
    }
    if ((lVar6 == 0) || (*(long *)(param_1 + 0xd0) == 0)) {
LAB_100bde3a3:
      if (iVar2 < 0) {
LAB_100bde3dc:
        *(undefined4 *)(lVar1 + 0x124) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        uVar8 = 0;
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100bde45b;
      }
      if (*(long *)(param_1 + 0xe0) == 0) {
LAB_100bde40e:
        if (*(uint *)(lVar1 + 0x124) < 0x4001) {
          *(undefined4 *)(lVar1 + 0x128) = 0;
          *(undefined4 *)(param_1 + 0x70) = 0;
          uVar8 = 1;
          lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_100bde45b;
        }
        uVar8 = 0x92;
        uVar10 = 0x21a;
      }
      else {
        if (*(uint *)(lVar1 + 0x124) < 0x4401) {
          iVar2 = FUN_100bd1000(param_1);
          if (iVar2 == 0) {
            FUN_100c62ee0(0x14,0x101,0x6b,"d1_pkt.c",0x213);
            uVar8 = 0x1e;
            goto LAB_100bde441;
          }
          goto LAB_100bde40e;
        }
        uVar8 = 0x8c;
        uVar10 = 0x20e;
      }
      FUN_100c62ee0(0x14,0x101,uVar8,"d1_pkt.c",uVar10);
      uVar8 = 0x16;
    }
    else {
      lVar6 = FUN_100c6fca0(*(undefined8 *)(param_1 + 0xd8));
      if (lVar6 == 0) goto LAB_100bde3a3;
      uVar8 = FUN_100c6fca0(*(undefined8 *)(param_1 + 0xd8));
      uVar3 = FUN_100c6fc50(uVar8);
      if (0x40 < uVar3) {
        FUN_100bf2cd0("d1_pkt.c",0x1d0,"mac_size <= EVP_MAX_MD_SIZE");
      }
      uVar11 = (*(uint *)(lVar1 + 0x120) >> 8) + *(int *)(lVar1 + 0x124);
      if (uVar3 <= uVar11) {
        uVar7 = FUN_100c6f890(*(undefined8 *)(param_1 + 0xd0));
        if ((uVar11 < uVar3 + 1) && ((uVar7 & 0xf0007) == 2)) goto LAB_100bde2b9;
        uVar7 = FUN_100c6f890(*(undefined8 *)(param_1 + 0xd0));
        if ((uVar7 & 0xf0007) == 2) {
          puVar12 = local_b8;
          FUN_100bd4550(puVar12,lVar1 + 0x120,uVar3,uVar11);
          *(int *)(lVar1 + 0x124) = *(int *)(lVar1 + 0x124) - uVar3;
        }
        else {
          uVar11 = *(int *)(lVar1 + 0x124) - uVar3;
          *(uint *)(lVar1 + 0x124) = uVar11;
          puVar12 = (undefined1 *)((ulong)uVar11 + *(long *)(lVar1 + 0x130));
        }
        iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 8))(param_1,local_78,0);
        if ((puVar12 == (undefined1 *)0x0) || (iVar4 < 0)) {
LAB_100bde38e:
          iVar2 = -1;
        }
        else {
          iVar4 = FUN_100bf2f90(local_78,puVar12,uVar3);
          if (iVar4 != 0) goto LAB_100bde38e;
        }
        if (*(uint *)(lVar1 + 0x124) <= uVar3 + 0x4400) goto LAB_100bde3a3;
        goto LAB_100bde3dc;
      }
LAB_100bde2b9:
      FUN_100c62ee0(0x14,0x101,0xa0,"d1_pkt.c",0x1e2);
      uVar8 = 0x32;
    }
LAB_100bde441:
    lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  else {
    FUN_100c62ee0(0x14,0x101,0x96,"d1_pkt.c",0x1ab);
    uVar8 = 0x16;
  }
  FUN_100bd2dc0(param_1,2,uVar8);
  uVar8 = 0;
LAB_100bde45b:
  if (lVar9 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

