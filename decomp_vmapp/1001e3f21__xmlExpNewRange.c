
xmlExpNodePtr _xmlExpNewRange(xmlExpCtxtPtr ctxt,xmlExpNodePtr subset,int min,int max)

{
  undefined8 local_28;
  
  if ((((ctxt == (xmlExpCtxtPtr)0x0) || (subset == (xmlExpNodePtr)0x0)) || (min < 0)) ||
     ((max < -1 || ((-1 < max && (max < min)))))) {
    _xmlExpFree(ctxt,subset);
    local_28 = (xmlExpNodePtr)0x0;
  }
  else {
    local_28 = (xmlExpNodePtr)FUN_1001e3261(ctxt,5,subset,0,0,min,max);
  }
  return local_28;
}

