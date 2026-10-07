
void _xmlRelaxNGSetValidStructuredErrors
               (xmlRelaxNGValidCtxtPtr ctxt,xmlStructuredErrorFunc serror,void *ctx)

{
  if (ctxt != (xmlRelaxNGValidCtxtPtr)0x0) {
    *(xmlStructuredErrorFunc *)(ctxt + 0x18) = serror;
    *(undefined8 *)(ctxt + 8) = 0;
    *(undefined8 *)(ctxt + 0x10) = 0;
    *(void **)ctxt = ctx;
  }
  return;
}

