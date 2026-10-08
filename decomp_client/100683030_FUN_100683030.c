
ulong FUN_100683030(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  QVariant local_40;
  QVariant local_30;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    lVar3 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
    uVar6 = 0xffffffff;
    if (lVar3 == 0) goto switchD_100683087_caseD_4;
    uVar6 = 0xd;
    switch(param_2) {
    case 0:
    case 10:
      lVar3 = *(long *)(param_1 + 0x20);
      break;
    default:
      goto switchD_100683087_caseD_2;
    case 3:
    case 4:
    case 0xb:
      goto switchD_100683087_caseD_4;
    case 0xffffffff:
      uVar6 = 0;
      cVar1 = FUN_100626bf0();
      if (cVar1 == '\0') goto switchD_100683087_caseD_4;
      lVar3 = *(long *)(param_1 + 0x20);
      uVar6 = 10;
      if (*(int *)(lVar3 + 0x78) == 4) goto switchD_100683087_caseD_4;
    }
    iVar2 = FUN_100683450(lVar3);
    uVar6 = 0xd;
    if (iVar2 != -1) {
      uVar4 = FUN_100683450(*(undefined8 *)(param_1 + 0x20));
      return uVar4;
    }
    goto switchD_100683087_caseD_4;
  }
  uVar6 = 8;
  switch(param_2) {
  default:
    goto switchD_100683087_caseD_2;
  case 1:
    lVar3 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
    if (lVar3 != 0) {
      uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
      uVar5 = FUN_10016f500(uVar5);
      cVar1 = FUN_10061c5c0(uVar5);
      uVar6 = 2;
      if (cVar1 != '\0') break;
    }
    goto LAB_100683209;
  case 2:
LAB_100683209:
    cVar1 = FUN_100678030(*(long *)(param_1 + 0x20));
    if ((cVar1 == '\0') || (uVar6 = 5, *(int *)(*(long *)(param_1 + 0x20) + 0x78) == 1)) {
switchD_100683087_caseD_2:
      uVar6 = 0xffffffff;
    }
    break;
  case 3:
  case 4:
  case 0xb:
    uVar6 = 5;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x78) != 1) {
      cVar1 = FUN_100676210();
      if (cVar1 != '\0') {
        uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
        uVar5 = FUN_10016f500(uVar5);
        cVar1 = FUN_10061b500(uVar5,0x22);
        uVar6 = 0xc;
        if (cVar1 != '\0') break;
      }
      uVar6 = 1;
    }
    break;
  case 6:
  case 9:
  case 10:
    uVar6 = 1;
    break;
  case 7:
    break;
  case 8:
    uVar6 = 9;
    break;
  case 0xffffffff:
    iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x78);
    uVar6 = 7;
    if (iVar2 != 3) {
      if (iVar2 == 1) {
        uVar5 = FUN_100675e00();
        uVar5 = FUN_10016f500(uVar5);
        cVar1 = FUN_10061b500(uVar5,0x20000);
        uVar6 = 3;
        if (cVar1 != '\0') {
          uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
          uVar5 = FUN_10016f500(uVar5);
          cVar1 = FUN_10061c680(uVar5);
          uVar6 = (uint)(cVar1 == '\0') * 8 + 3;
        }
      }
      else {
        uVar6 = 10;
        if (iVar2 != 4) {
          lVar3 = FUN_100675e00();
          uVar6 = 1;
          if (lVar3 != 0) {
            uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
            uVar5 = FUN_10016f500(uVar5);
            cVar1 = FUN_10061c4a0(uVar5);
            if (cVar1 != '\0') {
              uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
              uVar5 = FUN_10016f500(uVar5);
              FUN_10061abe0(&local_30,uVar5,0xf);
              cVar1 = QVariant::toBool();
              QVariant::~QVariant(&local_30);
              uVar6 = 3;
              if (cVar1 != '\0') break;
              uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
              uVar5 = FUN_10016f500(uVar5);
              cVar1 = FUN_10061b500(uVar5,0x20000);
              uVar6 = 0xb;
              if (cVar1 != '\0') break;
            }
            cVar1 = FUN_100612960();
            if (cVar1 != '\0') {
              uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
              uVar5 = FUN_10016f500(uVar5);
              FUN_10061abe0(&local_40,uVar5,0);
              iVar2 = QVariant::toInt((bool *)&local_40);
              QVariant::~QVariant(&local_40);
              uVar6 = 0xc;
              if (iVar2 == -0x7ffef000) break;
            }
            uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
            uVar5 = FUN_10016f500(uVar5);
            cVar1 = FUN_10061c5c0(uVar5);
            uVar6 = 2;
            if (cVar1 == '\0') {
              uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
              uVar5 = FUN_10016f500(uVar5);
              cVar1 = FUN_10061c2b0(uVar5,0x80);
              if (cVar1 != '\0') {
                uVar5 = FUN_100675e00(*(undefined8 *)(param_1 + 0x20));
                uVar5 = FUN_10016f500(uVar5);
                cVar1 = FUN_10061b500(uVar5,0x20);
                uVar6 = 1;
                if (cVar1 != '\0') break;
              }
              uVar6 = 0xc;
            }
          }
        }
      }
    }
  }
switchD_100683087_caseD_4:
  return (ulong)uVar6;
}

