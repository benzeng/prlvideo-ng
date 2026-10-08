
int FUN_100c6de50(long param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int local_48;
  
  piVar2 = *(int **)(param_1 + 0x30);
  FUN_100c58810(param_1,0xf);
  if (piVar2[4] != 1) {
    piVar2[4] = 1;
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    FUN_100c65160(piVar2 + 7);
  }
  piVar10 = piVar2 + 1;
  if (0x5dd < *piVar10) {
    FUN_100bf2cd0("bio_b64.c",0x17a,"ctx->buf_off < (int)sizeof(ctx->buf)");
  }
  iVar3 = *piVar2;
  if (0x5de < iVar3) {
    FUN_100bf2cd0("bio_b64.c",0x17b,"ctx->buf_len <= (int)sizeof(ctx->buf)");
    iVar3 = *piVar2;
  }
  iVar4 = *piVar10;
  if (iVar3 < iVar4) {
    FUN_100bf2cd0("bio_b64.c",0x17c,"ctx->buf_len >= ctx->buf_off");
    iVar3 = *piVar2;
    iVar4 = piVar2[1];
  }
  iVar6 = iVar3 - iVar4;
  if (iVar6 == 0 || iVar3 < iVar4) {
LAB_100c6dfed:
    piVar2[0] = 0;
    piVar2[1] = 0;
    iVar3 = 0;
    if ((0 < param_3) && (param_2 != (void *)0x0)) {
      piVar1 = piVar2 + 0x1f;
      iVar3 = 0;
      do {
        local_48 = param_3;
        if (0x400 < param_3) {
          local_48 = 0x400;
        }
        uVar5 = FUN_100c58820(param_1,0xffffffff);
        if ((uVar5 & 0x100) == 0) {
          FUN_100c65180(piVar2 + 7,piVar1,piVar2,param_2,local_48);
          iVar4 = *piVar2;
          if (0x5de < iVar4) {
            FUN_100bf2cd0("bio_b64.c",0x1bf,"ctx->buf_len <= (int)sizeof(ctx->buf)");
            iVar4 = *piVar2;
          }
          if (iVar4 < *piVar10) {
            uVar7 = 0x1c0;
LAB_100c6e1e4:
            FUN_100bf2cd0("bio_b64.c",uVar7,"ctx->buf_len >= ctx->buf_off");
          }
LAB_100c6e1f7:
          iVar3 = iVar3 + local_48;
        }
        else {
          iVar4 = piVar2[2];
          if (iVar4 < 1) {
            if (local_48 < 3) {
              _memcpy((void *)((long)piVar2 + 0x65a),param_2,(long)local_48);
              piVar2[2] = local_48;
              return iVar3 + local_48;
            }
            local_48 = (local_48 / 3) * 3;
            iVar4 = FUN_100c652b0(piVar1,param_2);
            *piVar2 = iVar4;
            if (0x5de < iVar4) {
              FUN_100bf2cd0("bio_b64.c",0x1b7,"ctx->buf_len <= (int)sizeof(ctx->buf)");
              iVar4 = *piVar2;
            }
            if (iVar4 < *piVar10) {
              uVar7 = 0x1b8;
              goto LAB_100c6e1e4;
            }
            goto LAB_100c6e1f7;
          }
          if (3 < iVar4) {
            FUN_100bf2cd0("bio_b64.c",0x196,"ctx->tmp_len <= 3");
            iVar4 = piVar2[2];
          }
          local_48 = 3 - iVar4;
          if (param_3 < 3 - iVar4) {
            local_48 = param_3;
          }
          _memcpy((void *)((long)piVar2 + (long)iVar4 + 0x65a),param_2,(long)local_48);
          iVar4 = piVar2[2];
          piVar2[2] = iVar4 + local_48;
          iVar3 = iVar3 + local_48;
          if (iVar4 + local_48 < 3) {
            return iVar3;
          }
          iVar4 = FUN_100c652b0(piVar1,(void *)((long)piVar2 + 0x65a));
          *piVar2 = iVar4;
          if (0x5de < iVar4) {
            FUN_100bf2cd0("bio_b64.c",0x1a5,"ctx->buf_len <= (int)sizeof(ctx->buf)");
            iVar4 = *piVar2;
          }
          if (iVar4 < *piVar10) {
            FUN_100bf2cd0("bio_b64.c",0x1a6,"ctx->buf_len >= ctx->buf_off");
          }
          piVar2[2] = 0;
        }
        piVar2[1] = 0;
        if (0 < *piVar2) {
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          piVar8 = piVar1;
          iVar4 = *piVar2;
          while( true ) {
            iVar6 = FUN_100c58980(uVar7,piVar8,iVar4);
            if (iVar6 < 1) {
              FUN_100c59780(param_1);
              if (iVar3 != 0) {
                return iVar3;
              }
              return iVar6;
            }
            if (iVar4 < iVar6) {
              FUN_100bf2cd0("bio_b64.c",0x1ce,"i <= n");
            }
            iVar9 = iVar6 + *piVar10;
            *piVar10 = iVar9;
            if (0x5de < iVar9) {
              FUN_100bf2cd0("bio_b64.c",0x1d1,"ctx->buf_off <= (int)sizeof(ctx->buf)");
              iVar9 = *piVar10;
            }
            if (*piVar2 < iVar9) {
              FUN_100bf2cd0("bio_b64.c",0x1d2,"ctx->buf_len >= ctx->buf_off");
            }
            if (iVar4 - iVar6 < 1) break;
            uVar7 = *(undefined8 *)(param_1 + 0x38);
            piVar8 = (int *)((long)piVar2 + (long)piVar2[1] + 0x7c);
            iVar4 = iVar4 - iVar6;
          }
        }
        param_3 = param_3 - local_48;
        param_2 = (void *)((long)param_2 + (long)local_48);
        piVar2[0] = 0;
        piVar2[1] = 0;
      } while (0 < param_3);
    }
  }
  else {
    iVar3 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),(long)piVar2 + (long)iVar4 + 0x7c,iVar6);
    while (0 < iVar3) {
      if (iVar6 < iVar3) {
        FUN_100bf2cd0("bio_b64.c",0x184,"i <= n");
      }
      iVar4 = *piVar10 + iVar3;
      *piVar10 = iVar4;
      if (0x5de < iVar4) {
        FUN_100bf2cd0("bio_b64.c",0x186,"ctx->buf_off <= (int)sizeof(ctx->buf)");
        iVar4 = *piVar10;
      }
      if (*piVar2 < iVar4) {
        FUN_100bf2cd0("bio_b64.c",0x187,"ctx->buf_len >= ctx->buf_off");
      }
      iVar4 = iVar6 - iVar3;
      if (iVar4 == 0 || iVar6 < iVar3) goto LAB_100c6dfed;
      iVar3 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),(long)piVar2 + (long)piVar2[1] + 0x7c,
                            iVar4);
      iVar6 = iVar4;
    }
    FUN_100c59780(param_1);
  }
  return iVar3;
}

