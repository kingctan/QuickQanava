
**2017/03/04:** There is already a lot of clones on 'dev', please: do not try 'dev' until your intention is to contribute (and drop me a line if you are using Qan on a regular basis: benoit@destrat.io).

**Roadmap:**

  - **GTpo** (Configurable topology library):
     - [ ] Redesign GTPO to support group -> node and group -> group topology with full restricted hyperlink support.
     - [X] Increase GTpo test coverage to 100%.
	 - [ ] Remove all virtual overhead with current getClassName() / getObjectName() code.
	 - [ ] Redesign the serialization framework completely.
	 - [ ] Add native configurable ID mapping.
  - **QuickContainers** (QT/QML observable adapter for STL or Qt containers):	 
    - [ ] Redesign QuickContainers: qcm::ContainerModel<> memory footprint is too high (mainly because it inherits from QAbstractItemModel with a strong virtual and signals/slots overhead)
  - [50%] Add _efficient_ support for non visual nodes and edges.
  - [ ] Update samples for full QQC2 controls support.
  - [ ] Add a 100 C++ interface (currently QML delegate components definition are still necessary)
     - [ ] Publish the 4k sample (40k is probably too much for QML without dedicated culling and LOD code).
  - [ ] Add full support for groups inside group (ie subgraphs).
  - [ ] Redesign visual edge connector interface.
  - [ ] Add full support bezier curve edge.
     - [ ] Use QPainterPath for lines, curves and poly rendering instead of QuickGeoGL (QuickGeoGl is probaly faster for simple AA lines with its vertex shader, but QuickGeoGL is too complex to maintain).
  - [ ] Fix current qan::PointGrid bugs and add "snap to grid" support.
  - [ ] Add support for multiple "docks" per node (ie to connect in edges on multiple node side, not only at node center).
  - Qt 5.10 is targetted for the 1.0 release with full QPainterPath support.