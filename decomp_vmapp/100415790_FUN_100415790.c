
void FUN_100415790(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  char *pcVar10;
  char cVar11;
  int iVar12;
  char cVar13;
  char *pcVar14;
  int iVar15;
  char local_31;
  
  pcVar10 = (char *)(*(long *)(param_1 + 0x660) + 0x18);
  cVar5 = QIODevice::getChar(pcVar10);
  if (cVar5 != '\0') {
    cVar13 = (char)param_1 + 'h';
    bVar4 = false;
    cVar11 = '\0';
    bVar6 = 0;
    bVar3 = false;
    bVar1 = false;
    cVar5 = '\0';
    do {
      while (cVar8 = local_31, *(int *)(param_1 + 0x60c) != 0) {
        if ((local_31 == '$') || (local_31 == '+')) goto LAB_100415a20;
LAB_100415ac9:
        cVar8 = QIODevice::getChar(pcVar10);
LAB_100415ad6:
        if (cVar8 == '\0') {
          return;
        }
      }
      if (!bVar1) {
        if (local_31 != '$') {
          if (((local_31 == '\x03') &&
              (iVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(), iVar15 != 0)) &&
             (iVar15 = FUN_100416dc0(param_1), iVar15 != 0)) {
            FUN_100416e70(param_1);
            goto LAB_100415ac9;
          }
          cVar8 = QIODevice::getChar(pcVar10);
          bVar1 = false;
          goto LAB_100415ad6;
        }
        bVar1 = false;
        cVar8 = '$';
      }
LAB_100415a20:
      iVar15 = (int)cVar8;
      bVar2 = bVar1;
      switch(iVar15) {
      case 0x23:
        if (bVar4) {
          QByteArray::clear();
          bVar3 = false;
          bVar6 = 0;
          bVar2 = false;
          bVar4 = false;
        }
        else {
          bVar4 = true;
          cVar11 = '\0';
        }
        break;
      case 0x24:
        *(undefined4 *)(param_1 + 0x60c) = 0;
        bVar2 = true;
        if (bVar1) {
          QByteArray::clear();
          bVar3 = false;
          bVar6 = 0;
          bVar4 = false;
        }
        break;
      default:
switchD_100415a3f_caseD_25:
        if (bVar3) {
          bVar6 = bVar6 + cVar8;
          bVar3 = false;
          if (0x1d < iVar15) {
            iVar12 = 0;
            if (iVar15 + -0x1d < 0x7f) {
              do {
                QByteArray::append(cVar13);
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar15 + -0x1d);
            }
          }
        }
        else if (bVar4) {
          if (cVar11 == '\x01') {
            cVar5 = FUN_10041f8d0((int)cVar5);
            bVar7 = FUN_10041f8d0((int)local_31);
            pcVar14 = (char *)(*(long *)(param_1 + 0x660) + 0x18);
            if ((byte)(bVar7 | cVar5 << 4) == bVar6) {
              QIODevice::write(pcVar14,0x100b21a38);
              uVar9 = FUN_100416630(param_1);
              *(undefined4 *)(param_1 + 0x60c) = uVar9;
            }
            else {
              QIODevice::write(pcVar14,0x1009e35e4);
            }
            QByteArray::clear();
            cVar11 = '\x01';
            bVar3 = false;
            bVar6 = 0;
            bVar2 = false;
            bVar4 = false;
          }
          else {
            cVar11 = cVar11 + '\x01';
            bVar3 = false;
          }
        }
        else {
          bVar6 = cVar8 + bVar6;
          QByteArray::append(cVar13);
          bVar3 = false;
          bVar4 = false;
        }
        break;
      case 0x2a:
switchD_100415a3f_caseD_2a:
        if ((bVar3) || (cVar8 != '*')) goto switchD_100415a3f_caseD_25;
        bVar6 = bVar6 + 0x2a;
        bVar3 = true;
        break;
      case 0x2b:
        if (*(int *)(param_1 + 0x60c) == 0) goto switchD_100415a3f_caseD_2a;
        *(undefined4 *)(param_1 + 0x60c) = 0;
      }
      cVar8 = QIODevice::getChar(pcVar10);
      bVar1 = bVar2;
      cVar5 = local_31;
    } while (cVar8 != '\0');
  }
  return;
}

