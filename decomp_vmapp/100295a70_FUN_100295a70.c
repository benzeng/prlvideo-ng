
void FUN_100295a70(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x141c0) == 0) {
    FUN_100291670(param_2);
                    /* WARNING: Could not recover jumptable at 0x000100295ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x50))(param_2,0);
    return;
  }
  uVar3 = **(uint **)(param_2 + 0x48);
  bVar1 = *(byte *)(*(long *)(param_2 + 0x60) + 2);
  if (bVar1 < 0xe0) {
    uVar5 = (uint)bVar1;
    if (uVar5 < 0xc4) {
      uVar4 = (uint)bVar1;
      if (uVar5 < 0x20) {
        if (uVar5 < 8) {
          if (uVar4 == 0) {
            *(undefined2 *)(param_2 + 0x38) = 0x141;
            goto LAB_100295d48;
          }
          if (bVar1 == 6) {
            FUN_1002941e0(param_1,param_2);
            goto LAB_100295d48;
          }
        }
        else if (uVar5 == 8) {
          FUN_1008e3970("","LocalDevices",0,
                        "ATA Command 0x%X is prohibited for this device (%d, %d)",8,
                        *(undefined2 *)(param_1 + 0xfee),*(undefined2 *)(param_1 + 0xff0));
        }
        else if (uVar4 == 0x10) {
LAB_100295cdb:
          *(undefined2 *)(param_2 + 0x38) = 0x50;
          goto LAB_100295d48;
        }
      }
      else if (uVar5 < 0x60) {
        uVar6 = (ulong)(uVar4 - 0x20);
        if (uVar4 - 0x20 < 0x23) {
          if ((0x2330233UL >> (uVar6 & 0x3f) & 1) != 0) {
LAB_100295bef:
            FUN_1002958e0(param_1,param_2);
            return;
          }
          if ((0x700000000U >> (uVar6 & 0x3f) & 1) != 0) {
            *(undefined2 *)(param_2 + 0x38) = 0x50;
            goto LAB_100295d48;
          }
          if (uVar6 == 0xf) {
            FUN_100296740(param_1,param_2);
            return;
          }
        }
      }
      else if (uVar5 < 0x91) {
        if (bVar1 - 0x60 < 2) goto LAB_100295bef;
        if (bVar1 == 0x70) goto LAB_100295cdb;
        if (uVar4 == 0x90) {
          *(undefined2 *)(param_2 + 0x38) = 0x150;
          goto LAB_100295d48;
        }
      }
      else if (bVar1 == 0x91) {
        *(undefined1 *)(param_2 + 0x38) = 0x50;
        goto LAB_100295d48;
      }
    }
    else {
      uVar5 = uVar5 - 0xc4;
      if (uVar5 < 8) {
        if ((0xf3U >> (uVar5 & 0x1f) & 1) != 0) goto LAB_100295bef;
        if (uVar5 == 2) {
          bVar1 = *(byte *)(param_2 + 0x3c);
          if ((char)bVar1 < '\x02') {
            if (bVar1 != 0x80) goto LAB_100295d48;
          }
          else if ((0x3e < (byte)(bVar1 - 2)) ||
                  ((0x4000000040004045U >> ((ulong)(byte)(bVar1 - 2) & 0x3f) & 1) == 0))
          goto LAB_100295d48;
          *(undefined1 *)(param_2 + 0x38) = 0x50;
          *(ulong *)(param_1 + 0x141d0) = (ulong)*(byte *)(param_2 + 0x41) << 0x20 | (ulong)bVar1;
          goto LAB_100295d48;
        }
      }
    }
switchD_100295b05_caseD_e4:
    FUN_100291670(param_2);
  }
  else {
    switch(bVar1) {
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe6:
      *(undefined1 *)(param_2 + 0x38) = 0x50;
      break;
    default:
      goto switchD_100295b05_caseD_e4;
    case 0xe5:
      *(undefined1 *)(param_2 + 0x38) = 0x50;
      *(undefined1 *)(param_2 + 0x3c) = 0xff;
      break;
    case 0xe7:
    case 0xea:
      FUN_100295dc0(param_1,param_2);
      break;
    case 0xec:
      FUN_100295e80(param_1,param_2);
      return;
    case 0xef:
      cVar2 = *(char *)(param_2 + 0x39);
      if ((cVar2 == -0x7e) || (cVar2 == '\x02')) {
        lVar8 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
        lVar7 = (ulong)*(ushort *)(param_1 + 0xff0) * 0x80;
        uVar5 = *(uint *)(lVar7 + 0x46f4 + lVar8);
        uVar4 = uVar5 | 1;
        if (cVar2 != '\x02') {
          uVar4 = uVar5 & 0xfffffffe;
        }
        *(uint *)(lVar7 + 0x46f4 + lVar8) = uVar4;
      }
      *(undefined2 *)(param_2 + 0x38) = 0x40;
      break;
    case 0xf0:
      *(undefined2 *)(param_2 + 0x38) = 0x58;
    }
  }
LAB_100295d48:
  (**(code **)(param_2 + 0x50))(param_2,0);
  FUN_10025b2f0(param_1 + 0x68,(uVar3 >> 6 & 1) + 1);
  return;
}

