
void FUN_10013d308(int *param_1,long param_2,xmlChar *param_3,xmlGenericErrorFunc param_4,
                  void *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  void *local_120;
  xmlGenericErrorFunc local_118;
  undefined1 local_f8 [152];
  long local_60;
  uint local_54;
  int local_50;
  int local_4c;
  long local_48;
  long local_40;
  int local_34;
  long local_30;
  long local_28;
  int local_20;
  int local_1c;
  
  local_60 = 0;
  local_54 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_1 != (int *)0x0) {
    local_120 = param_5;
    local_118 = param_4;
    if (param_4 == (xmlGenericErrorFunc)0x0) {
      ppxVar4 = ___xmlGenericError();
      local_118 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      local_120 = *ppvVar5;
    }
    local_60 = *(long *)(param_1 + 6);
    local_54 = param_1[8];
    local_50 = param_1[1];
    local_4c = *param_1;
    local_34 = param_1[4];
    local_40 = *(long *)(param_1 + 0x14);
    if (local_50 != 0) {
      if ((local_40 != 0) && (*(int *)(local_40 + 8) == 1)) {
        local_48 = *(long *)(local_40 + 0x10);
      }
      if (param_2 == 0) {
        if (local_60 == 0) {
          if ((local_54 != 0) && (local_4c == 1)) {
            (*local_118)(local_120,"Entity: line %d: ",(ulong)local_54);
          }
        }
        else {
          (*local_118)(local_120,"%s:%d: ",local_60,(ulong)local_54);
        }
      }
      else {
        lVar2 = *(long *)(param_2 + 0x38);
        local_30 = lVar2;
        if (((lVar2 != 0) && (*(long *)(lVar2 + 8) == 0)) && (1 < *(int *)(param_2 + 0x40))) {
          local_30 = *(long *)(*(long *)(param_2 + 0x48) + (long)*(int *)(param_2 + 0x40) * 8 +
                              -0x10);
          local_28 = lVar2;
        }
        if (local_30 != 0) {
          if (*(long *)(local_30 + 8) == 0) {
            if ((local_54 != 0) && (local_4c == 1)) {
              (*local_118)(local_120,"Entity: line %d: ",(ulong)*(uint *)(local_30 + 0x34));
            }
          }
          else {
            (*local_118)(local_120,"%s:%d: ",*(undefined8 *)(local_30 + 8),
                         (ulong)*(uint *)(local_30 + 0x34));
          }
        }
      }
      if (local_48 != 0) {
        (*local_118)(local_120,"element %s: ",local_48);
      }
      if (local_50 != 0) {
        switch(local_4c) {
        case 1:
          (*local_118)(local_120,"parser ");
          break;
        case 3:
          (*local_118)(local_120,"namespace ");
          break;
        case 4:
        case 0x17:
          (*local_118)(local_120,"validity ");
          break;
        case 5:
          (*local_118)(local_120,"HTML parser ");
          break;
        case 6:
          (*local_118)(local_120,"memory ");
          break;
        case 7:
          (*local_118)(local_120,"output ");
          break;
        case 8:
          (*local_118)(local_120,"I/O ");
          break;
        case 0xb:
          (*local_118)(local_120,"XInclude ");
          break;
        case 0xc:
          (*local_118)(local_120,"XPath ");
          break;
        case 0xd:
          (*local_118)(local_120,"parser ");
          break;
        case 0xe:
          (*local_118)(local_120,"regexp ");
          break;
        case 0x10:
          (*local_118)(local_120,"Schemas parser ");
          break;
        case 0x11:
          (*local_118)(local_120,"Schemas validity ");
          break;
        case 0x12:
          (*local_118)(local_120,"Relax-NG parser ");
          break;
        case 0x13:
          (*local_118)(local_120,"Relax-NG validity ");
          break;
        case 0x14:
          (*local_118)(local_120,"Catalog ");
          break;
        case 0x15:
          (*local_118)(local_120,"C14N ");
          break;
        case 0x16:
          (*local_118)(local_120,"XSLT ");
          break;
        case 0x1a:
          (*local_118)(local_120,"module ");
          break;
        case 0x1b:
          (*local_118)(local_120,"encoding ");
        }
        if (local_50 != 0) {
          if (local_34 == 1) {
            (*local_118)(local_120,"warning : ");
          }
          else if (local_34 == 0) {
            (*local_118)(local_120,": ");
          }
          else if (local_34 == 2) {
            (*local_118)(local_120,"error : ");
          }
          else if (local_34 == 3) {
            (*local_118)(local_120,"error : ");
          }
          if (local_50 != 0) {
            if (param_3 == (xmlChar *)0x0) {
              (*local_118)(local_120,"%s\n","out of memory error");
            }
            else {
              local_20 = _xmlStrlen(param_3);
              if ((local_20 < 1) || (param_3[(long)local_20 + -1] == '\n')) {
                (*local_118)(local_120,"%s",param_3);
              }
              else {
                (*local_118)(local_120,"%s\n",param_3);
              }
            }
            if (local_50 != 0) {
              if ((param_2 != 0) && (FUN_10013d0e0(local_30,local_118,local_120), local_28 != 0)) {
                if (*(long *)(local_28 + 8) == 0) {
                  if ((local_54 != 0) && (local_4c == 1)) {
                    (*local_118)(local_120,"Entity: line %d: \n",(ulong)*(uint *)(local_28 + 0x34));
                  }
                }
                else {
                  (*local_118)(local_120,"%s:%d: \n",*(undefined8 *)(local_28 + 8),
                               (ulong)*(uint *)(local_28 + 0x34));
                }
                FUN_10013d0e0(local_28,local_118,local_120);
              }
              if ((((local_4c == 0xc) && (*(long *)(param_1 + 10) != 0)) && (param_1[0x10] < 100))
                 && (iVar1 = param_1[0x10], iVar3 = _xmlStrlen(*(xmlChar **)(param_1 + 10)),
                    iVar1 < iVar3)) {
                (*local_118)(local_120,"%s\n",*(undefined8 *)(param_1 + 10));
                for (local_1c = 0; local_1c < param_1[0x10]; local_1c = local_1c + 1) {
                  local_f8[local_1c] = 0x20;
                }
                local_f8[local_1c] = 0x5e;
                local_1c = local_1c + 1;
                local_f8[local_1c] = 0;
                (*local_118)(local_120,"%s\n",local_f8);
              }
            }
          }
        }
      }
    }
  }
  return;
}

