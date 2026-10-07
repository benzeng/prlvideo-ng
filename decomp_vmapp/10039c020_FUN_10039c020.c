
void FUN_10039c020(undefined8 param_1,undefined8 param_2,uint param_3,byte *param_4,char *param_5,
                  undefined8 param_6)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = (*param_4 & 3) + param_3;
  uVar6 = ((*param_4 & 3) - 3) + param_3;
  if (uVar3 < 3) {
    uVar6 = uVar3;
  }
  pcVar2 = "i";
  pcVar5 = "";
  if (uVar6 != 1) {
    pcVar2 = "";
  }
  pcVar4 = "u";
  if (uVar6 != 2) {
    pcVar4 = pcVar2;
  }
  FUN_10038e8e0(param_2,"\t%svec4 %s = ",pcVar4,param_6);
  bVar1 = *param_4;
  if (bVar1 < 3) {
    pcVar5 = "";
    if (uVar6 != param_3) {
      if (param_3 == 2) {
        bVar7 = uVar6 == 0;
        pcVar2 = "U2F";
        pcVar5 = "ivec4";
      }
      else if (param_3 == 1) {
        bVar7 = uVar6 == 0;
        pcVar2 = "I2F";
        pcVar5 = "uvec4";
      }
      else {
        if (param_3 != 0) goto LAB_10039c1e1;
        bVar7 = uVar6 == 1;
        pcVar2 = "F2I";
        pcVar5 = "F2U";
      }
      if (bVar7) {
        pcVar5 = pcVar2;
      }
    }
  }
  else {
    if ((bVar1 & 3) == 3) {
      bVar1 = bVar1 >> 2;
      if ((bVar1 == 7) || (bVar1 == 3)) {
        pcVar5 = "vec4(uvec4(%s*65535.0) ^ uvec4(0x8000))/65535.0*2.0 - 1.0;\n";
        goto LAB_10039c19d;
      }
      if (bVar1 == 1) {
        pcVar5 = "vec4(uvec4(%s*255.0) ^ uvec4(0x80))/255.0*2.0 - 1.0;\n";
        goto LAB_10039c19d;
      }
      pcVar5 = "";
      if (uVar6 != param_3) {
        if (param_3 == 2) {
          bVar7 = uVar6 == 0;
          pcVar2 = "U2F";
          pcVar5 = "ivec4";
        }
        else {
          if (param_3 != 1) {
            if ((param_3 == 0) && (pcVar5 = "F2U", uVar6 == 1)) {
              pcVar5 = "F2I";
            }
            goto LAB_10039c326;
          }
          bVar7 = uVar6 == 0;
          pcVar2 = "I2F";
          pcVar5 = "uvec4";
        }
LAB_10039c31e:
        if (bVar7) {
          pcVar5 = pcVar2;
        }
      }
LAB_10039c326:
      pcVar2 = "%s(%s);\n";
      goto LAB_10039c1e5;
    }
    if (param_3 == 0) {
      switch(bVar1 >> 2) {
      case 1:
        if (uVar6 == 2) {
          pcVar5 = "uvec4((%s + 1.0)*255.0/2.0) ^ uvec4(0x80);\n";
        }
        else {
          pcVar5 = "ivec4(floor(%s*255.0/2.0));\n";
        }
        break;
      case 2:
        if (uVar6 == 2) {
          if (*(char *)(DAT_1011c8478 + 0x67) == '\0') {
            pcVar5 = "uvec4(%s*65535.0);\n";
          }
          else {
            pcVar5 = "uvec4(%s*65535.0 + 0.5);\n";
          }
          break;
        }
        pcVar2 = "ivec4(%s*65535.0) ^ (ivec4(0xFFFFFFFF) * (ivec4(%s*65535.0) >> ivec4(15)));\n";
        pcVar5 = param_5;
        goto LAB_10039c1e5;
      case 3:
        if (uVar6 == 2) {
          pcVar5 = "uvec4((%s + 1.0)*65535.0/2.0) ^ uvec4(0x8000);\n";
        }
        else {
          pcVar5 = "ivec4(floor(%s*65535.0/2.0));\n";
        }
        break;
      default:
        return;
      case 5:
        if (uVar6 != 2) {
          pcVar2 = "ivec4(%s*255.0) ^ (ivec4(0xFFFFFFFF) * (ivec4(%s*255.0) >> ivec4(7)));\n";
          pcVar5 = param_5;
          goto LAB_10039c1e5;
        }
        if (*(char *)(DAT_1011c8478 + 0x67) == '\0') {
          pcVar5 = "uvec4(%s*255.0);\n";
        }
        else {
          pcVar5 = "uvec4(%s*255.0 + 0.5);\n";
        }
        break;
      case 6:
        if (uVar6 != 0) {
          bVar7 = uVar6 == 1;
          pcVar2 = "F2I";
          pcVar5 = "F2U";
          goto LAB_10039c31e;
        }
        pcVar5 = "";
        goto LAB_10039c326;
      }
LAB_10039c19d:
      FUN_10038e8e0(param_2,pcVar5,param_5);
      return;
    }
    if (uVar6 == 0) {
      pcVar2 = "";
      if (param_3 == 1) {
        pcVar2 = "I2F";
      }
      pcVar5 = "U2F";
      if (param_3 != 2) {
        pcVar5 = pcVar2;
      }
    }
    else {
      if (param_3 == 2) {
        if (bVar1 >> 2 == 2) {
          pcVar2 = "ivec4(%s) ^ (ivec4(0xFFFFFFFF) * (ivec4(%s) >> ivec4(15)));\n";
          pcVar5 = param_5;
        }
        else {
          if (bVar1 >> 2 != 1) {
            return;
          }
          pcVar2 = "ivec4(%s) ^ (ivec4(0xFFFFFFFF) * (ivec4(%s) >> ivec4(7)));\n";
          pcVar5 = param_5;
        }
        goto LAB_10039c1e5;
      }
      if ((uVar6 != param_3) && (pcVar5 = "", param_3 == 1)) {
        pcVar5 = "uvec4";
      }
    }
  }
LAB_10039c1e1:
  pcVar2 = "%s(%s);\n";
LAB_10039c1e5:
  FUN_10038e8e0(param_2,pcVar2,pcVar5,param_5);
  return;
}

