
undefined8 *
FUN_10039bae0(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5,
             int param_6)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  
  bVar1 = 5;
  switch(param_4) {
  case 1:
  case 2:
    bVar1 = 0;
    break;
  case 3:
  case 4:
  case 6:
  case 7:
    bVar1 = (param_5 != 0) * '\x04' + 1;
    break;
  case 5:
  case 8:
    bVar1 = (param_5 != 0) * '\x03' + 2;
    break;
  case 9:
    bVar1 = (param_5 != 0) * '\x02' + 3;
    break;
  case 10:
    bVar1 = param_5 != 0 | 4;
  }
  iVar3 = 3;
  if (param_6 != 1) {
    iVar3 = param_3;
  }
  if (param_3 != 1) {
    iVar3 = param_3;
  }
  switch(iVar3) {
  case 1:
    if (bVar1 != 0) goto switchD_10039bb6b_caseD_9;
    pcVar2 = "texelFetch";
    break;
  case 2:
    switch(bVar1) {
    case 0:
      *param_1 = "texelFetch";
      pcVar2 = "tc.x, tc.w+0";
      goto LAB_10039bd93;
    case 1:
      pcVar2 = "texture";
      break;
    case 2:
      *param_1 = "texture";
      pcVar2 = "vec3(tc.x, 0, cmpVal)";
      goto LAB_10039bdb4;
    default:
      goto switchD_10039bb6b_caseD_9;
    case 4:
switchD_10039bc31_caseD_4:
      *param_1 = "textureQueryLod";
      pcVar2 = "tc.x";
LAB_10039bd4c:
      param_1[1] = pcVar2;
      *(undefined4 *)(param_1 + 2) = 2;
      return param_1;
    }
    break;
  case 3:
    switch(bVar1) {
    case 0:
switchD_10039bc31_caseD_0:
      *param_1 = "texelFetch";
      pcVar2 = "tc.xy, tc.w+0";
      goto LAB_10039bd93;
    case 1:
switchD_10039bc31_caseD_1:
      pcVar2 = "texture";
      break;
    case 2:
switchD_10039bc31_caseD_2:
      *param_1 = "texture";
      pcVar2 = "vec3(tc.xy, cmpVal)";
LAB_10039bdb4:
      param_1[1] = pcVar2;
      *(undefined4 *)(param_1 + 2) = 1;
      return param_1;
    case 3:
      pcVar2 = "textureGather";
      break;
    case 4:
switchD_10039bc5e_caseD_4:
      *param_1 = "textureQueryLod";
      pcVar2 = "tc.xy";
      goto LAB_10039bd4c;
    default:
      goto switchD_10039bb6b_caseD_9;
    }
    goto LAB_10039bd03;
  case 4:
    if (bVar1 != 0) goto switchD_10039bb6b_caseD_9;
    pcVar2 = "texelFetch";
LAB_10039bd03:
    *param_1 = pcVar2;
    pcVar2 = "tc.xy";
    goto LAB_10039bd93;
  case 5:
    if (bVar1 == 4) {
switchD_10039bcaf_caseD_4:
      *param_1 = "textureQueryLod";
      pcVar2 = "tc.xyz";
      goto LAB_10039bd4c;
    }
    if (bVar1 == 1) goto switchD_10039bc5e_caseD_1;
    if (bVar1 != 0) goto switchD_10039bb6b_caseD_9;
switchD_10039bc5e_caseD_0:
    *param_1 = "texelFetch";
    pcVar2 = "tc.xyz, tc.w+0";
    goto LAB_10039bd93;
  case 6:
    switch(bVar1) {
    case 1:
switchD_10039bc5e_caseD_1:
      pcVar2 = "texture";
      break;
    case 2:
switchD_10039bc5e_caseD_2:
      *param_1 = "texture";
      pcVar2 = "vec4(tc.xyz, cmpVal)";
      goto LAB_10039bdb4;
    case 3:
switchD_10039bc5e_caseD_3:
      pcVar2 = "textureGather";
      break;
    case 4:
      goto switchD_10039bcaf_caseD_4;
    default:
      goto switchD_10039bb6b_caseD_9;
    }
    *param_1 = pcVar2;
    pcVar2 = "tc.xyz";
    goto LAB_10039bd93;
  case 7:
    switch(bVar1) {
    case 0:
      goto switchD_10039bc31_caseD_0;
    case 1:
      goto switchD_10039bc31_caseD_1;
    case 2:
      goto switchD_10039bc31_caseD_2;
    default:
      goto switchD_10039bb6b_caseD_9;
    case 4:
      goto switchD_10039bc31_caseD_4;
    }
  case 8:
    switch(bVar1) {
    case 0:
      goto switchD_10039bc5e_caseD_0;
    case 1:
      goto switchD_10039bc5e_caseD_1;
    case 2:
      goto switchD_10039bc5e_caseD_2;
    case 3:
      goto switchD_10039bc5e_caseD_3;
    case 4:
      goto switchD_10039bc5e_caseD_4;
    default:
      goto switchD_10039bb6b_caseD_9;
    }
  default:
switchD_10039bb6b_caseD_9:
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return param_1;
  case 10:
    switch(bVar1) {
    case 1:
      pcVar2 = "texture";
      break;
    case 2:
      *param_1 = "texture";
      pcVar2 = "tc.xyzw, cmpVal";
      goto LAB_10039bdb4;
    case 3:
      pcVar2 = "textureGather";
      break;
    case 4:
      goto switchD_10039bcaf_caseD_4;
    default:
      goto switchD_10039bb6b_caseD_9;
    }
    *param_1 = pcVar2;
    pcVar2 = "tc.xyzw";
    goto LAB_10039bd93;
  }
  *param_1 = pcVar2;
  pcVar2 = "tc.x";
LAB_10039bd93:
  param_1[1] = pcVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}

