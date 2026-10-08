
undefined8
FUN_100d68a70(long param_1,uint param_2,undefined8 param_3,int param_4,undefined4 *param_5,
             uint param_6,uint *param_7,undefined4 *param_8)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  uint *puVar9;
  long lVar10;
  QArrayData *local_40;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar9 = (uint *)*puVar3;
      if ((1 < *puVar9) || (*(long *)(puVar9 + 4) != 0x18)) {
        QByteArray::reallocData(puVar3,puVar9[1] + 1,puVar9[2] >> 0x1f);
        puVar9 = (uint *)*puVar3;
      }
      lVar4 = *(long *)(puVar9 + 4);
      if ((long)puVar9 + lVar4 != 0) {
        lVar10 = (ulong)param_2 + lVar4;
        if (*(short *)((long)puVar9 + lVar10) != 0x6b6e) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.54:");
          return 0x8158009;
        }
        if (*(int *)((long)puVar9 + lVar10 + 0x24) == 0) {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("","WinRegistry",3,"OA00002.55: This key has no values.");
            return 0x8158012;
          }
          return 0x8158012;
        }
        uVar5 = FUN_100d680b0(param_1,(long)puVar9 + lVar10);
        if (uVar5 == 0xffffffff) {
          if (DAT_10230ffd0 < 3) {
            return 0x8158014;
          }
          QString::toUtf8();
          FUN_100df99c0("","WinRegistry",3,"OA00002.56: Value %s does not exist.",
                        local_40 + *(long *)(local_40 + 0x10));
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              UNLOCK();
              if (*(int *)local_40 != 0) {
                return 0x8158014;
              }
            }
            QArrayData::deallocate(local_40,1,8);
            return 0x8158014;
          }
          return 0x8158014;
        }
        uVar7 = (ulong)(*(int *)((long)puVar9 +
                                (ulong)uVar5 * 4 +
                                (ulong)(*(int *)((long)puVar9 + lVar10 + 0x28) + 0x1004) + lVar4) +
                       0x1004);
        lVar10 = uVar7 + lVar4;
        if (*(short *)((long)puVar9 + lVar10) != 0x6b76) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.57:");
          return 0x815800b;
        }
        if (param_8 != (undefined4 *)0x0) {
          *param_8 = *(undefined4 *)((long)puVar9 + lVar10 + 0xc);
        }
        uVar5 = *(uint *)((long)puVar9 + lVar10 + 4);
        if (uVar5 == 0x80000000) {
          *param_7 = 4;
          if (param_6 < 4) {
            if (param_6 == 0) {
              return 0x8158016;
            }
            pcVar8 = "OA00002.59: buffer to small %x; %x";
LAB_100d68bc6:
            FUN_100df99c0("","WinRegistry",0,pcVar8,4);
            return 0x8158016;
          }
          uVar6 = *(undefined4 *)((long)puVar9 + lVar10 + 0xc);
        }
        else {
          if (uVar5 == 0) {
            FUN_100df99c0("","WinRegistry",0,"OA00002.58:");
            return 0x8158015;
          }
          if (((param_4 != 0) && (iVar2 = *(int *)((long)puVar9 + lVar10 + 0xc), iVar2 != 0)) &&
             (iVar2 != param_4)) {
            FUN_100df99c0("","WinRegistry",0,"OA00002.60:");
            return 0x8158018;
          }
          if (-1 < (int)uVar5) {
            lVar1 = lVar4 + 4 + uVar7;
            if (uVar5 <= param_6) {
              *param_7 = uVar5;
              _memcpy(param_5,(void *)((ulong)(*(int *)((long)puVar9 + lVar10 + 8) + 0x1004) + lVar4
                                      + (long)puVar9),(ulong)*(uint *)((long)puVar9 + lVar1));
              return 0x8000000;
            }
            if (param_6 != 0) {
              FUN_100df99c0("","WinRegistry",0,"OA00002.62: buffer to small %x; %x");
              uVar5 = *(uint *)((long)puVar9 + lVar1);
            }
            *param_7 = uVar5;
            return 0x8158016;
          }
          *param_7 = 4;
          if (param_6 < 4) {
            if (param_6 == 0) {
              return 0x8158016;
            }
            pcVar8 = "OA00002.61: buffer to small %x; %x";
            goto LAB_100d68bc6;
          }
          uVar6 = *(undefined4 *)((long)puVar9 + lVar10 + 8);
        }
        *param_5 = uVar6;
        return 0x8000000;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.53:");
  return 0x8158002;
}

