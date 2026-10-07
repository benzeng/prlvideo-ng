
void FUN_1003791f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar6 = *(undefined8 **)(param_2 + 0x30);
  do {
    if (puVar6 == (undefined8 *)0x0) {
      FUN_10038e8e0(param_4,"\n");
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    iVar1 = FUN_1003ac660(param_2);
    iVar5 = *(int *)((long)puVar6 + 0xc);
    lVar7 = (ulong)(uint)(iVar1 * 0xf + iVar5) * 0x10;
    lVar4 = *(long *)(param_3 + 0x868 + lVar7);
    if ((lVar4 == 0) || (uVar8 = *(uint *)(param_3 + 0x874 + lVar7), uVar8 == 0)) {
      if ((*(byte *)(puVar6 + 3) & 1) != 0) {
        if (puVar6[5] == puVar6[4]) {
LAB_100379373:
          FUN_10038e8e0(param_4,"#define CB%d%s(N) vec4(0)\n",iVar5,"_Dyn");
        }
        else {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 8) != 0) {
            iVar5 = *(int *)((long)puVar6 + 0xc);
            goto LAB_100379373;
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 2) != 0) {
            FUN_10038e8e0(param_4,"#define iCB%d%s(N) ivec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 1) != 0) {
            FUN_10038e8e0(param_4,"#define uCB%d%s(N) uvec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 4) != 0) {
            FUN_10038e8e0(param_4,"#define bCB%d%s(N) bvec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
      }
      if ((*(byte *)(puVar6 + 3) & 2) != 0) {
        if (puVar6[5] == puVar6[4]) {
LAB_100379450:
          FUN_10038e8e0(param_4,"#define CB%d%s(N) vec4(0)\n",*(undefined4 *)((long)puVar6 + 0xc),""
                       );
        }
        else {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 8) != 0) goto LAB_100379450;
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 2) != 0) {
            FUN_10038e8e0(param_4,"#define iCB%d%s(N) ivec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 1) != 0) {
            FUN_10038e8e0(param_4,"#define uCB%d%s(N) uvec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 4) != 0) {
            FUN_10038e8e0(param_4,"#define bCB%d%s(N) bvec4(0)\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"");
          }
        }
      }
    }
    else {
      iVar5 = 0;
      if (((*(byte *)(puVar6 + 3) & 1) == 0) && ((*(uint3 *)(lVar4 + 0xb0) & 0x31000) != 0x1000)) {
        iVar5 = *(int *)((long)puVar6 + 0x14);
      }
      uVar8 = uVar8 >> 4;
      if ((uint)(*(int *)(puVar6 + 1) - iVar5) <= uVar8) {
        uVar8 = *(int *)(puVar6 + 1) - iVar5;
      }
      FUN_10038e870(local_70,local_48,0x10);
      if ((*(char *)(DAT_1011c8478 + 0x4c) == '\0') ||
         ((*(uint3 *)(*(long *)(param_3 + 0x868 + lVar7) + 0xb0) & 0x11000) != 0x1000)) {
        uVar2 = FUN_1003ac5c0(param_2);
        FUN_10038e8e0(local_70,"%s_cb%d",uVar2,*(undefined4 *)((long)puVar6 + 0xc));
        lVar4 = local_68;
        if (local_68 == 0) {
          lVar4 = local_58;
        }
        FUN_10038e8e0(param_4,"uniform vec4 %s[%d];\n",lVar4,uVar8);
      }
      else {
        FUN_10038e8e0(local_70,"cb%d",*(undefined4 *)((long)puVar6 + 0xc));
        uVar2 = FUN_1003ac5c0(param_2);
        lVar4 = local_68;
        if (local_68 == 0) {
          lVar4 = local_58;
        }
        FUN_10038e8e0(param_4,"layout(std140) uniform %s_ubo%d { vec4 %s[%d]; };\n",uVar2,
                      *(undefined4 *)((long)puVar6 + 0xc),lVar4,uVar8);
      }
      if ((*(byte *)(puVar6 + 3) & 1) != 0) {
        lVar4 = local_68;
        if (local_68 == 0) {
          lVar4 = local_58;
        }
        if (*(char *)(DAT_1011c8478 + 0x54) == '\0') {
          FUN_10038e8e0(param_4,"#define CB%d_Dyn(N) %s[N - %d]\n",
                        *(undefined4 *)((long)puVar6 + 0xc),lVar4,iVar5);
        }
        else {
          FUN_10038e8e0(param_4,
                        "#define CB%d_Dyn(N) (bool(uint(N) < uint(%d)) ? %s[N - %d] : vec4(0))\n",
                        *(undefined4 *)((long)puVar6 + 0xc),uVar8 + iVar5,lVar4,iVar5);
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 2) != 0) {
            FUN_10038e8e0(param_4,"#define iCB%d%s(N) F2I(CB%d%s(N))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 1) != 0) {
            FUN_10038e8e0(param_4,"#define uCB%d%s(N) F2U(CB%d%s(N))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 4) != 0) {
            FUN_10038e8e0(param_4,"#define bCB%d%s(N) bvec4(F2U(CB%d%s(N)))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn",
                          *(undefined4 *)((long)puVar6 + 0xc),"_Dyn");
          }
        }
      }
      if ((*(byte *)(puVar6 + 3) & 2) != 0) {
        lVar4 = local_68;
        if (local_68 == 0) {
          lVar4 = local_58;
        }
        if (uVar8 < (uint)(*(int *)(puVar6 + 1) - iVar5)) {
          FUN_10038e8e0(param_4,"#define CB%d(N) ((N < %d) ? %s[(N - %d) %% %d] : vec4(0))\n",
                        *(undefined4 *)((long)puVar6 + 0xc),uVar8 + iVar5,lVar4,iVar5,uVar8);
        }
        else {
          FUN_10038e8e0(param_4,"#define CB%d(N) %s[N - %d]\n",*(undefined4 *)((long)puVar6 + 0xc),
                        lVar4,iVar5);
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 2) != 0) {
            FUN_10038e8e0(param_4,"#define iCB%d%s(N) F2I(CB%d%s(N))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"",*(undefined4 *)((long)puVar6 + 0xc)
                          ,"");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 1) != 0) {
            FUN_10038e8e0(param_4,"#define uCB%d%s(N) F2U(CB%d%s(N))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"",*(undefined4 *)((long)puVar6 + 0xc)
                          ,"");
          }
        }
        if (puVar6[5] != puVar6[4]) {
          uVar3 = FUN_1003abcf0(puVar6);
          if ((uVar3 & 4) != 0) {
            FUN_10038e8e0(param_4,"#define bCB%d%s(N) bvec4(F2U(CB%d%s(N)))\n",
                          *(undefined4 *)((long)puVar6 + 0xc),"",*(undefined4 *)((long)puVar6 + 0xc)
                          ,"");
          }
        }
      }
      FUN_10038e8c0(local_70);
    }
    puVar6 = (undefined8 *)*puVar6;
  } while( true );
}

