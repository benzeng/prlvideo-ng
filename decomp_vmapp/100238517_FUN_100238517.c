
undefined4 FUN_100238517(undefined8 param_1,int *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *local_28;
  uint local_18;
  int local_14;
  undefined4 local_c;
  
  local_c = 0;
  local_28 = param_2;
  while (local_28 != (int *)0x0) {
    if ((*local_28 == 0xb) || (*local_28 == 0xd)) {
      if ((param_3 >> 3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x434,
                      "Found forbidden pattern data/except//ref\n",0,0);
      }
      if ((short)local_28[0x18] < -3) {
        if ((short)local_28[0x18] == -4) {
          local_14 = 2;
        }
        else {
          local_14 = (short)local_28[0x18] + 0xf;
        }
      }
      else {
        *(undefined2 *)(local_28 + 0x18) = 0xfffc;
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3,*local_28);
        *(short *)(local_28 + 0x18) = (short)local_14 + -0xf;
      }
    }
    else if (*local_28 == 4) {
      FUN_100233df2(param_1,local_28);
      if ((param_3 >> 3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42e,
                      "Found forbidden pattern data/except//element(ref)\n",0,0);
      }
      if ((param_3 >> 2 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x437,
                      "Found forbidden pattern list//element(ref)\n",0,0);
      }
      if ((param_3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42c,
                      "Found forbidden pattern attribute//element(ref)\n",0,0);
      }
      if ((param_3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42c,
                      "Found forbidden pattern attribute//element(ref)\n",0,0);
      }
      iVar2 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0x12),0,*local_28);
      if (iVar2 != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x3f7,
                      "Element %s attributes have a content type error\n",
                      *(undefined8 *)(local_28 + 4),0);
      }
      iVar2 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),0,*local_28);
      if (iVar2 == -1) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x3f8,
                      "Element %s has a content type error\n",*(undefined8 *)(local_28 + 4),0);
        local_14 = -1;
      }
      else {
        local_14 = 2;
      }
    }
    else if (*local_28 == 9) {
      if ((param_3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42b,
                      "Found forbidden pattern attribute//attribute\n",0,0);
      }
      if ((param_3 >> 2 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x436,
                      "Found forbidden pattern list//attribute\n",0,0);
      }
      if ((param_3 >> 5 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x43e,
                      "Found forbidden pattern oneOrMore//group//attribute\n",0,0);
      }
      if ((param_3 >> 6 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x43f,
                      "Found forbidden pattern oneOrMore//interleave//attribute\n",0,0);
      }
      if ((param_3 >> 3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42d,
                      "Found forbidden pattern data/except//attribute\n",0,0);
      }
      if ((param_3 >> 4 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x440,
                      "Found forbidden pattern start//attribute\n",0,0);
      }
      if (((param_3 >> 1 & 1) == 0) && (*(long *)(local_28 + 4) == 0)) {
        if (*(long *)(local_28 + 6) == 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),1000,
                        "Found anyName attribute without oneOrMore ancestor\n",0,0);
        }
        else {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x420,
                        "Found nsName attribute without oneOrMore ancestor\n",0,0);
        }
      }
      FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3 | 1,*local_28);
      local_14 = 0;
    }
    else if ((*local_28 == 0x10) || (*local_28 == 0xf)) {
      if ((param_3 >> 3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x433,
                      "Found forbidden pattern data/except//oneOrMore\n",0,0);
      }
      if ((param_3 >> 4 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x446,
                      "Found forbidden pattern start//oneOrMore\n",0,0);
      }
      uVar1 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3 | 2,*local_28);
      local_14 = FUN_100238466(uVar1,uVar1);
    }
    else if (*local_28 == 8) {
      if ((param_3 >> 2 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x439,
                      "Found forbidden pattern list//list\n",0,0);
      }
      if ((param_3 >> 3 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x432,
                      "Found forbidden pattern data/except//list\n",0,0);
      }
      if ((param_3 >> 4 & 1) != 0) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x445,
                      "Found forbidden pattern start//list\n",0,0);
      }
      local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3 | 4,*local_28);
    }
    else {
      local_18 = param_3;
      if (*local_28 == 0x12) {
        if ((param_3 >> 3 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x430,
                        "Found forbidden pattern data/except//group\n",0,0);
        }
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x443,
                        "Found forbidden pattern start//group\n",0,0);
        }
        if ((param_3 >> 1 & 1) != 0) {
          local_18 = param_3 | 0x20;
        }
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),local_18,*local_28);
        FUN_100233df2(param_1,local_28);
      }
      else if (*local_28 == 0x13) {
        if ((param_3 >> 2 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x438,
                        "Found forbidden pattern list//interleave\n",0,0);
        }
        if ((param_3 >> 3 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x431,
                        "Found forbidden pattern data/except//interleave\n",0,0);
        }
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x431,
                        "Found forbidden pattern start//interleave\n",0,0);
        }
        if ((param_3 >> 1 & 1) != 0) {
          local_18 = param_3 | 0x40;
        }
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),local_18,*local_28);
      }
      else if (*local_28 == 2) {
        if ((*(long *)(local_28 + 0xe) != 0) && (**(int **)(local_28 + 0xe) == 5)) {
          local_18 = param_3 | 8;
        }
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),local_18,*local_28);
      }
      else if (*local_28 == 5) {
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x441,
                        "Found forbidden pattern start//data\n",0,0);
        }
        FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3,*local_28);
        local_14 = 1;
      }
      else if (*local_28 == 7) {
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x448,
                        "Found forbidden pattern start//value\n",0,0);
        }
        FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3,*local_28);
        local_14 = 1;
      }
      else if (*local_28 == 3) {
        if ((param_3 >> 2 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x43b,
                        "Found forbidden pattern list//text\n",0,0);
        }
        if ((param_3 >> 3 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x435,
                        "Found forbidden pattern data/except//text\n",0,0);
        }
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x447,
                        "Found forbidden pattern start//text\n",0,0);
        }
        local_14 = 2;
      }
      else if (*local_28 == 0) {
        if ((param_3 >> 3 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x42f,
                        "Found forbidden pattern data/except//empty\n",0,0);
        }
        if ((param_3 >> 4 & 1) != 0) {
          FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),0x442,
                        "Found forbidden pattern start//empty\n",0,0);
        }
        local_14 = 0;
      }
      else if (*local_28 == 0x11) {
        FUN_100233955(param_1,local_28);
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3,*local_28);
      }
      else {
        local_14 = FUN_100238517(param_1,*(undefined8 *)(local_28 + 0xc),param_3,*local_28);
      }
    }
    local_28 = *(int **)(local_28 + 0x10);
    if (param_4 == 0x12) {
      local_c = FUN_100238466(local_c,local_14);
    }
    else if (param_4 == 0x13) {
      iVar2 = FUN_100238466(local_c,local_14);
      if (iVar2 != -1) {
        FUN_1002384c2(local_c,local_14);
      }
    }
    else if (param_4 == 0x11) {
      local_c = FUN_1002384c2(local_c,local_14);
    }
    else if (param_4 == 8) {
      local_c = 1;
    }
    else if (param_4 == 2) {
      if (local_14 == -1) {
        local_c = 0xffffffff;
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = FUN_100238466(local_c,local_14);
    }
  }
  return local_c;
}

