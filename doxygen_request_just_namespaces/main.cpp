#include <concepts>

/**
* @brief
*   I would like an option to only have namespaces appear in the namespace page.
*/
namespace my_namespace {

    /**
    * @brief
    *   I would like an option to have concepts not appear in the namespace page. I like the concepts page having namespaces, but not the other way around.
    */
    template <typename type_p>
    concept my_concept = true;

    /**
    * @brief
    *   I would like an option to have classes not appear in the namespace page.  I like the classes page having namespaces, but not the other way around.
    */
    class my_class
    {
    public:
    };

    /**
    * @brief
    *   It can be useful to only have namespaces on the namespace page, because the namespace tree can be insightful.
    */
    namespace an_uncluttered_namespace {

        namespace a {

            namespace aa {

            }

            namespace ab {

            }

            namespace ac {

            }

        }

        namespace b {

            namespace ba {

            }

            namespace bb {

            }

            namespace bc {

            }

        }

        namespace c {

            namespace ca {

            }

            namespace cb {

            }

            namespace cc {

            }

        }

    }

    /**
    * @brief
    *   But other entities can clutter the structure of namespaces in the program. I know that with enough entities, the tree structure starts to be folded. However, I still don't want to sift through all the concepts and classes when I'm trying to focus just on namespaces. Having everything seeable in one gigantic tree is nice too, but it should be its own separate page away from namespaces.
    */
    namespace the_cluttered_namespace {

        namespace a {

            namespace aa {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace ab {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace ac {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

        }

        namespace b {

            namespace ba {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace bb {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace bc {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

        }

        namespace c {

            namespace ca {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace cb {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

            namespace cc {

                template <typename type_p>
                concept a = true;

                template <typename type_p>
                concept b = true;

                template <typename type_p>
                concept c = true;

                template <typename type_p>
                concept d = true;

                template <typename type_p>
                concept e = true;

            }

        }

    }

}

int main(void)
{
    return 0;
}
