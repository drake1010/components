////////////////////////////////////////////////////////////////////////////////////
//
//     _____    ____ _       ____ _        __ _      __ _  __ _  ______ _   ___ _
//    / /| |]  |  __ \\     / ___ \\      / \ \\    |   \\/   |]|  _____|] / ___|]
//   / //| |]  | |] \ \\   | |]  \_|]    / //\ \\   | |\ / /| |]| |]___ _ ( ((_ _
//  / //_| |]_ | |]  ) ))  | |]  __ _   / _____ \\  | |]\_/ | |]|  _____|] \___ \\
// |_____   _|]| |]_/ //   | |]__/  |] / //    \ \\ | |]    | |]| |]___ _   ___) ))
//       |_|]  |_____//     \_____/|]]/_//      \_\\|_|]    |_|]|_______|] |____//
// 
//
////////////////////////////////////////////////////////////////////////////////////
//
//
//  File    : Manager.hpp
//  Author  : Anthony Islas
//  Purpose : File Description
//  Group   : Resources
//
//  TODO    : Anthony Islas
//
//  License : None
//
////////////////////////////////////////////////////////////////////////////////////
#ifndef __RESOURCES_MANAGER_H__
#define __RESOURCES_MANAGER_H__

#include <vector>
#include <map>

namespace components
{

namespace resources
{

template< typename Item, typename Tag >
class Manager
{
public:
  Manager();
  virtual ~Manager();

  void addItem( Item item, Tag tag );
  Item* getItem( Tag tag );

  std::vector< Item > getItems( );
  
protected:

  std::map< Tag, Item > items_;


};


//**********************************************************************************
//
//  Manager< Item, Tag >::Manager
//
//  \brief A generic manager for resources management
//
//  \return Manager of type Item and Tag
//
//**********************************************************************************
template< typename Item, typename Tag >
Manager< Item, Tag >::Manager( )
{
  items_.clear( );
}

//**********************************************************************************
//
//  Manager< Item, Tag >::~Manager
//
//  \brief DTOR
//
//  \return none
//
//**********************************************************************************
template< typename Item, typename Tag >
Manager< Item, Tag >::~Manager( )
{

  items_.clear( );

}

//**********************************************************************************
//
//  Manager< Item, Tag >::addItem
//
//  \brief Add an item to the resource pool
// 
//  \param item 
//  \param tag 
// 
//  Places the item into a resource pool with an associated tag to reference later
//
//  \return none
//
//**********************************************************************************
template< typename Item, typename Tag >
void
Manager< Item, Tag >::addItem( Item item, Tag tag )
{

}


//**********************************************************************************
//
//  Manager< Item, Tag >::getItem
//
//  \brief Get an item from the resource pool
// 
//  \param tag 
// 
//  Retrieves an item from the resource pool with the associated tag
//
//  \return Item
//
//**********************************************************************************
template< typename Item, typename Tag >
Item*
Manager< Item, Tag >::getItem( Tag tag )
{

}

//**********************************************************************************
//
//  Manager< Item, Tag >::getItems
//
//  \brief Get all items in the resource pool
// 
// 
//  Get all items in the resource pool
//
//  \return vector of Items
//
//**********************************************************************************
template< typename Item, typename Tag >
std::vector< Item >
Manager< Item, Tag >::getItems( )
{
  
  
  
} // Manager< Item, Tag >::getItems


} // namespace resources

} // namespace components

#endif // __RESOURCES_MANAGER_H__