
void _xmlXPathDebugDumpObject(FILE *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char local_78 [108];
  int local_c;
  
  if (param_1 != (FILE *)0x0) {
    for (local_c = 0; (local_c < param_3 && (local_c < 0x19)); local_c = local_c + 1) {
      iVar1 = local_c * 2 + 1;
      local_78[iVar1] = ' ';
      local_78[local_c * 2] = local_78[iVar1];
    }
    iVar1 = local_c * 2 + 1;
    local_78[iVar1] = '\0';
    local_78[local_c * 2] = local_78[iVar1];
    _fprintf(param_1,local_78);
    if (param_2 == (undefined4 *)0x0) {
      _fwrite("Object is empty (NULL)\n",1,0x17,param_1);
    }
    else {
      switch(*param_2) {
      case 0:
        _fwrite("Object is uninitialized\n",1,0x18,param_1);
        break;
      case 1:
        _fwrite("Object is a Node Set :\n",1,0x17,param_1);
        FUN_1001a5d6c(param_1,*(undefined8 *)(param_2 + 2),param_3);
        break;
      case 2:
        _fwrite("Object is a Boolean : ",1,0x16,param_1);
        if (param_2[4] == 0) {
          _fwrite("false\n",1,6,param_1);
        }
        else {
          _fwrite("true\n",1,5,param_1);
        }
        break;
      case 3:
        iVar1 = _xmlXPathIsInf(*(double *)(param_2 + 6));
        if (iVar1 == -1) {
          _fwrite("Object is a number : -Infinity\n",1,0x1f,param_1);
        }
        else if (iVar1 == 1) {
          _fwrite("Object is a number : Infinity\n",1,0x1e,param_1);
        }
        else {
          iVar1 = _xmlXPathIsNaN(*(double *)(param_2 + 6));
          if (iVar1 == 0) {
            if (((*(double *)(param_2 + 6) != 0.0) || (NAN(*(double *)(param_2 + 6)))) ||
               (iVar1 = FUN_1001a4e82(*(undefined8 *)(param_2 + 6)), iVar1 == 0)) {
              _fprintf(param_1,"Object is a number : %0g\n",*(undefined8 *)(param_2 + 6));
            }
            else {
              _fwrite("Object is a number : 0\n",1,0x17,param_1);
            }
          }
          else {
            _fwrite("Object is a number : NaN\n",1,0x19,param_1);
          }
        }
        break;
      case 4:
        _fwrite("Object is a string : ",1,0x15,param_1);
        _xmlDebugDumpString(param_1,*(xmlChar **)(param_2 + 8));
        _fputc(10,param_1);
        break;
      case 5:
        _fprintf(param_1,"Object is a point : index %d in node",(ulong)(uint)param_2[0xc]);
        FUN_1001a5b32(param_1,*(undefined8 *)(param_2 + 10),param_3 + 1);
        _fputc(10,param_1);
        break;
      case 6:
        if ((*(long *)(param_2 + 0xe) == 0) ||
           ((*(long *)(param_2 + 0xe) == *(long *)(param_2 + 10) && (param_2[0xc] == param_2[0x10]))
           )) {
          _fwrite("Object is a collapsed range :\n",1,0x1e,param_1);
          _fprintf(param_1,local_78);
          if (-1 < (int)param_2[0xc]) {
            _fprintf(param_1,"index %d in ",(ulong)(uint)param_2[0xc]);
          }
          _fwrite("node\n",1,5,param_1);
          FUN_1001a5b32(param_1,*(undefined8 *)(param_2 + 10),param_3 + 1);
        }
        else {
          _fwrite("Object is a range :\n",1,0x14,param_1);
          _fprintf(param_1,local_78);
          _fwrite("From ",1,5,param_1);
          if (-1 < (int)param_2[0xc]) {
            _fprintf(param_1,"index %d in ",(ulong)(uint)param_2[0xc]);
          }
          _fwrite("node\n",1,5,param_1);
          FUN_1001a5b32(param_1,*(undefined8 *)(param_2 + 10),param_3 + 1);
          _fprintf(param_1,local_78);
          _fwrite("To ",1,3,param_1);
          if (-1 < (int)param_2[0x10]) {
            _fprintf(param_1,"index %d in ",(ulong)(uint)param_2[0x10]);
          }
          _fwrite("node\n",1,5,param_1);
          FUN_1001a5b32(param_1,*(undefined8 *)(param_2 + 0xe),param_3 + 1);
          _fputc(10,param_1);
        }
        break;
      case 7:
        _fwrite("Object is a Location Set:\n",1,0x1a,param_1);
        FUN_1001a5fe0(param_1,*(undefined8 *)(param_2 + 10),param_3);
        break;
      case 8:
        _fwrite("Object is user defined\n",1,0x17,param_1);
        break;
      case 9:
        _fwrite("Object is an XSLT value tree :\n",1,0x1f,param_1);
        FUN_1001a5ec0(param_1,*(undefined8 *)(param_2 + 2),param_3);
      }
    }
  }
  return;
}

