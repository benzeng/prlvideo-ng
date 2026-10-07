
void FUN_100303ec0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined8 in_RAX;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 local_28;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2868);
  uVar5 = (ulong)param_3;
  if (uVar1 < 0x20) {
    uVar3 = 0x20;
    uVar5 = (ulong)param_3;
    do {
      uVar3 = uVar3 >> 1;
      uVar5 = (ulong)((uint)uVar5 ^ (uint)uVar5 >> (sbyte)uVar3);
    } while (uVar1 < uVar3);
  }
  puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x2068 + (uVar5 & 0xff) * 8);
  uVar1 = 0;
  do {
    if (puVar4 == (uint *)0x0) {
LAB_100303f20:
      local_28 = CONCAT44((int)((ulong)in_RAX >> 0x20),uVar1);
      if ((param_3 != 0) && (uVar1 == 0)) {
        (*(code *)DAT_1011c4a88[0x285])(*DAT_1011c4a88,1,&local_28);
        uVar5 = local_28 & 0xffffffff;
        local_28 = CONCAT44(param_3,(undefined4)local_28);
        FUN_1003070c0(*(long *)(param_1 + 0x30) + 0x2060,(long)&local_28 + 4,uVar5);
      }
      if (param_2 < 0x8a11) {
        if (param_2 < 0x88eb) {
          if (param_2 == 0x8892) {
            *(uint *)(param_1 + 0x1484) = param_3;
          }
          else if (param_2 == 0x8893) {
            lVar2 = FUN_100303740(param_1);
            *(uint *)(lVar2 + 8) = param_3;
          }
        }
        else if (param_2 == 0x88eb) {
          *(uint *)(param_1 + 0x1488) = param_3;
        }
        else if (param_2 == 0x88ec) {
          *(uint *)(param_1 + 0x148c) = param_3;
        }
      }
      else if (param_2 < 0x8c8e) {
        if (param_2 == 0x8a11) {
          *(uint *)(param_1 + 0x1498) = param_3;
        }
        else if (param_2 == 0x8c2a) {
          *(uint *)(param_1 + 0x149c) = param_3;
        }
      }
      else if (param_2 == 0x8c8e) {
        *(uint *)(param_1 + 0x1494) = param_3;
      }
      else if (param_2 == 0x8dee) {
        *(uint *)(param_1 + 0x1490) = param_3;
      }
      (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,param_2,local_28 & 0xffffffff);
      return;
    }
    if (*puVar4 == param_3) {
      uVar1 = puVar4[1];
      goto LAB_100303f20;
    }
    puVar4 = *(uint **)(puVar4 + 2);
  } while( true );
}

