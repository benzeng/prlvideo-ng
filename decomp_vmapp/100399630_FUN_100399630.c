
void FUN_100399630(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 0xfffffffd) == 0x9100) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x10) - 1;
  if ((uVar3 & 1) != 0) {
    cVar1 = *(char *)(param_1 + 0x34);
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar7 = 0x2600;
    if ((int)uVar3 < 0x55) {
      if ((uVar3 < 0x16) && ((0x300030U >> (uVar3 & 0x1f) & 1) != 0)) goto LAB_1003996cc;
    }
    else if ((int)uVar3 < 0xd5) {
      if (((uVar3 - 0x84 < 2) || (uVar3 - 0x94 < 2)) || (uVar3 == 0x55)) {
LAB_1003996cc:
        uVar7 = 0x2601;
      }
    }
    else if (uVar3 == 0xd5) goto LAB_1003996cc;
    (*DAT_1011c6cd8)(uVar2,0x2800,uVar7);
    iVar6 = *(int *)(param_1 + 0x30);
    uVar5 = 0x2600;
    if (iVar6 < 0x55) {
      if (iVar6 < 0x10) {
        switch(iVar6) {
        case 0:
        case 4:
switchD_10039970d_caseD_0:
          uVar4 = 0x2700;
          uVar5 = 0x2600;
          break;
        case 1:
        case 5:
switchD_10039970d_caseD_1:
          uVar4 = 0x2702;
          uVar5 = 0x2600;
          break;
        default:
          goto switchD_10039970d_caseD_2;
        }
LAB_1003997bc:
        if (uVar8 != 0 && cVar1 != '\0') {
          uVar5 = uVar4;
        }
      }
      else {
        switch(iVar6) {
        case 0x10:
        case 0x14:
switchD_100399748_caseD_10:
          uVar4 = 0x2701;
LAB_100399781:
          uVar5 = 0x2601;
          goto LAB_1003997bc;
        case 0x11:
        case 0x15:
          goto switchD_100399748_caseD_11;
        }
      }
    }
    else if (iVar6 < 0xd5) {
      if (iVar6 < 0x90) {
        if (iVar6 < 0x80) {
          if (iVar6 == 0x55) goto switchD_100399748_caseD_11;
        }
        else {
          switch(iVar6) {
          case 0x80:
          case 0x84:
            goto switchD_10039970d_caseD_0;
          case 0x81:
          case 0x85:
            goto switchD_10039970d_caseD_1;
          }
        }
      }
      else {
        switch(iVar6) {
        case 0x90:
        case 0x94:
          goto switchD_100399748_caseD_10;
        case 0x91:
        case 0x95:
          goto switchD_100399748_caseD_11;
        }
      }
    }
    else if (iVar6 == 0xd5) {
switchD_100399748_caseD_11:
      uVar4 = 0x2703;
      goto LAB_100399781;
    }
switchD_10039970d_caseD_2:
    (*DAT_1011c6cd8)(uVar2,0x2801,uVar5);
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar3 & 2) != 0) {
    uVar5 = 0x812f;
    if ((ulong)(long)*(int *)(param_1 + 0x38) < 6) {
      uVar5 = *(undefined4 *)(&DAT_100b3f2c0 + (long)*(int *)(param_1 + 0x38) * 4);
    }
    (*DAT_1011c6cd8)(uVar2,0x2802,uVar5);
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar3 & 4) != 0) {
    uVar5 = 0x812f;
    if ((ulong)(long)*(int *)(param_1 + 0x3c) < 6) {
      uVar5 = *(undefined4 *)(&DAT_100b3f2c0 + (long)*(int *)(param_1 + 0x3c) * 4);
    }
    (*DAT_1011c6cd8)(uVar2,0x2803,uVar5);
  }
  if ((uVar2 == 0x806f) && ((*(byte *)(param_1 + 0x74) & 8) != 0)) {
    uVar5 = 0x812f;
    if ((ulong)(long)*(int *)(param_1 + 0x40) < 6) {
      uVar5 = *(undefined4 *)(&DAT_100b3f2c0 + (long)*(int *)(param_1 + 0x40) * 4);
    }
    (*DAT_1011c6cd8)(0x806f,0x8072,uVar5);
  }
  uVar3 = *(uint *)(param_1 + 0x74);
  if ((uVar3 & 0x21) != 0) {
    if (((*(int *)(param_1 + 0x30) != 0x55) && (*(int *)(param_1 + 0x30) != 0xd5)) ||
       (fVar9 = (float)*(uint *)(param_1 + 0x48), (float)*(uint *)(param_1 + 0x48) < DAT_100b39678))
    {
      fVar9 = DAT_100b39678;
    }
    (*DAT_1011c6cc8)(fVar9,uVar2,0x84fe);
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar3 & 0x40) != 0) {
    iVar6 = 0x200;
    if (*(int *)(param_1 + 0x4c) - 1U < 8) {
      iVar6 = *(int *)(param_1 + 0x4c) + 0x1ff;
    }
    (*DAT_1011c6cd8)(uVar2,0x884d,iVar6);
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar3 & 0x80) != 0) {
    uVar7 = 0x884e;
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar7 = 0;
    }
    (*DAT_1011c6cd8)(uVar2,0x884c,uVar7);
    uVar3 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar3 & 0x100) != 0) {
    (*DAT_1011c6cd0)(uVar2,0x1004,param_1 + 0x54);
  }
  if (uVar2 != 0x84f5) {
    uVar3 = *(uint *)(param_1 + 0x74);
    if ((uVar3 & 0x10) != 0) {
      (*DAT_1011c6cc8)(*(undefined4 *)(param_1 + 0x44),uVar2,0x8501);
      uVar3 = *(uint *)(param_1 + 0x74);
    }
    if ((uVar3 & 0x200) != 0) {
      fVar10 = (float)uVar8;
      fVar9 = *(float *)(param_1 + 100);
      if (fVar10 <= *(float *)(param_1 + 100)) {
        fVar9 = fVar10;
      }
      (*DAT_1011c6cc8)(fVar9,uVar2,0x813a);
      uVar3 = *(uint *)(param_1 + 0x74);
    }
    if ((uVar3 & 0x400) != 0) {
      (*DAT_1011c6cc8)(*(undefined4 *)(param_1 + 0x68),uVar2,0x813b);
    }
  }
  if ((*(byte *)(param_1 + 0x75) & 8) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
    if ((int)uVar3 < 0x66) {
      if (8 < uVar3) goto LAB_1003999df;
      uVar8 = 0x10a;
    }
    else {
      uVar3 = uVar3 - 0x66;
      if (0xc < uVar3) goto LAB_1003999df;
      uVar8 = 0x1015;
    }
    if ((uVar8 >> (uVar3 & 0x1f) & 1) != 0) {
      uVar7 = 0x8a49;
      if (*(char *)(param_1 + 0x6c) == '\0') {
        uVar7 = 0x8a4a;
      }
      (*DAT_1011c6cd8)(uVar2,0x8a48,uVar7);
    }
  }
LAB_1003999df:
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

