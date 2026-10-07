
undefined4 FUN_100806ee0(int *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  short *psVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  ulong *local_98;
  undefined1 *local_88;
  undefined1 local_80 [48];
  long local_50;
  ulong local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar12 = (param_3 != 0) + 1 & param_1[0x32];
  lVar11 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    puVar13 = (uint *)(lVar11 + 0x120);
    local_98 = (ulong *)(lVar11 + 0xc);
    plVar6 = (long *)(param_1 + 0x36);
  }
  else {
    puVar13 = (uint *)(lVar11 + 0x158);
    local_98 = (ulong *)(lVar11 + 0x58);
    plVar6 = (long *)(param_1 + 0x3c);
  }
  puVar3 = (undefined1 *)*plVar6;
  uVar7 = FUN_100894720();
  iVar5 = FUN_1008946d0(uVar7);
  if (iVar5 < 0) {
    FUN_10081d560("t1_enc.c",0x3f4,"t >= 0");
  }
  local_50 = (long)iVar5;
  local_88 = puVar3;
  if (uVar12 == 0) {
    local_88 = local_80;
    iVar5 = FUN_10088ab20(local_88,puVar3);
    uVar10 = 0xffffffff;
    if (iVar5 == 0) goto LAB_1008071d0;
  }
  iVar5 = *param_1;
  if ((iVar5 == 0x100) || (iVar5 == 0xfeff)) {
    psVar9 = (short *)(*(long *)(param_1 + 0x22) + 0x208);
    if (param_3 != 0) {
      psVar9 = (short *)(*(long *)(param_1 + 0x22) + 0x20a);
    }
    local_48 = (ulong)(ushort)(*psVar9 << 8) | (ulong)(byte)((ushort)*psVar9 >> 8) |
               (ulong)*(uint6 *)((long)local_98 + 2) << 0x10;
  }
  else {
    local_48 = *local_98;
  }
  uVar2 = *puVar13;
  lVar11 = (ulong)puVar13[1] + local_50;
  local_40 = (undefined1)uVar2;
  *puVar13 = uVar2 & 0xff;
  local_3f = (undefined1)((uint)iVar5 >> 8);
  local_3e = (undefined1)iVar5;
  local_3d = *(undefined1 *)((long)puVar13 + 5);
  local_3c = (undefined1)puVar13[1];
  if (param_3 == 0) {
    uVar8 = FUN_100894310(*(undefined8 *)(param_1 + 0x34));
    if ((uVar8 & 0xf0007) != 2) goto LAB_1008070ea;
    cVar4 = FUN_1007ff040(local_88);
    if (cVar4 == '\0') goto LAB_1008070ea;
    iVar5 = FUN_1007ff070(local_88,param_2,&local_50,&local_48,*(undefined8 *)(puVar13 + 6),
                          (ulong)puVar13[1] + local_50,lVar11 + (ulong)(uVar2 >> 8),
                          *(long *)(param_1 + 0x20) + 0x18,
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),0);
LAB_10080712e:
    if (0 < iVar5) {
      if (uVar12 == 0) {
        FUN_10088aa50(local_80);
      }
      if ((*param_1 != 0x100) && (*param_1 != 0xfeff)) {
        pcVar1 = (char *)((long)local_98 + 7);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = (char *)((long)local_98 + 6);
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = (char *)((long)local_98 + 5);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = (char *)((long)local_98 + 4);
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = (char *)((long)local_98 + 3);
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = (char *)((long)local_98 + 2);
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 == '\0') {
                    pcVar1 = (char *)((long)local_98 + 1);
                    *pcVar1 = *pcVar1 + '\x01';
                    if (*pcVar1 == '\0') {
                      *(char *)local_98 = (char)*local_98 + '\x01';
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar10 = (undefined4)local_50;
      goto LAB_1008071d0;
    }
  }
  else {
LAB_1008070ea:
    iVar5 = FUN_10088a910(local_88,&local_48,0xd);
    if (0 < iVar5) {
      iVar5 = FUN_10088a910(local_88,*(undefined8 *)(puVar13 + 6),puVar13[1]);
      if (0 < iVar5) {
        iVar5 = FUN_100897940(local_88,param_2,&local_50);
        goto LAB_10080712e;
      }
    }
  }
  uVar10 = 0xffffffff;
  if (uVar12 == 0) {
    FUN_10088aa50(local_80);
  }
LAB_1008071d0:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

